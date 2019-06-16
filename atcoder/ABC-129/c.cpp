#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

const long long mod = 1e9+7;

int main()
{
	int N, M;
	cin >> N >> M;

	vector<int> a(N+1, true);
	for(int i = 0; i < M; i++)
	{
		int aa = 0;
		cin >> aa;
		a[aa] = false;
	}

	vector<long long int> dp(N+1);
	dp[0] = 1;
	for(int i = 0; i < N; i++)
	{
		for(int j = i+1; j <= min(N, i+2); j++)
		{
			if(a[j] >= 1)
			{
				dp[j] += dp[i];
				dp[j] %= mod;
			}
		}
	}

	cout << dp[N] << endl;

	return 0;
}
