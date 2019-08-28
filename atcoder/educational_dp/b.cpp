#include <iostream>
#include <vector>
using namespace std;

int main()
{
	// 1<<29だとWA
	// 1LL<<60にするとAC
	const long long int INF = 1LL << 60;

	int N, K;
	cin >> N >> K;

	// K個分増やす（N+Kまでアクセスするため）
	vector<long long int> H(N+K+1, INF);
	for(int i = 0; i < N; i++) cin >> H[i];

	// K個分増やす（N+Kまでアクセスするため）
	vector<long long int> dp(N+K+1, INF);

	// 初期化
	dp[0] = 0;

	for(int i = 0; i < N; i++)
	{
		for(int j = 1; j <= K; j++)
		{
			dp[i+j] = min(dp[i+j], dp[i] + abs(H[i] - H[i+j]));
		}
	}

	// N番目までの最小コストが分かればよい
	cout << dp[N-1] << endl;

	return 0;
}
