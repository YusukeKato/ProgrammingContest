#include <iostream>
#include <vector>
using namespace std;
const int INF = 1<<29;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N; cin >> N;
	vector<int> dp(N+2, INF); dp[0] = -INF;

	for(int i = 0; i < N; i++) {
		int c; cin >> c;
		auto itr = lower_bound(dp.begin(), dp.end(), c);
		dp[itr-dp.begin()] = c;
	}

	int ans = 0;
	for(int i = 0; i < N+1; i++) {
		if(dp[i] != INF) ans = N-i;
	}

	cout << ans << endl;
	return 0;
}
