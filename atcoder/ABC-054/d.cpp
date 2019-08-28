#include <iostream>
#include <vector>
using namespace std;

int inf = 1<<29;
const int nmax = 40;
const int abmax = 10;

//dp[i][j][k]はグローバルで宣言（ローカルだとメモリ制限に引っかかる）
// i : 加えた薬品数
// j : 物質Aの合計の量
// k : 物質Bの合計の量
int dp[nmax+1][nmax*abmax+1][nmax*abmax+1] = {0};

int main()
{
	int N, Ma, Mb;
	cin >> N >> Ma >> Mb;

	vector<int> a(nmax+1, 0);
	vector<int> b(nmax+1, 0);
	vector<int> c(nmax+1, 0);

	for(int i = 0; i < N; i++)
	{
		cin >> a[i] >> b[i] >> c[i];
	}

	//dp配列を無限大で初期化（最小値を求めるため）
	for(int i = 0; i <= N; i++)
	{
		for(int j = 0; j <= nmax*abmax; j++)
		{
			for(int k = 0; k <= nmax*abmax; k++)
			{
				dp[i][j][k] = inf;
			}
		}
	}


	//加える薬品数が0の場合は、物質Aも物質Bも重さは0
	dp[0][0][0] = 0;

	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j <= nmax*abmax; j++)
		{
			for(int k = 0; k <= nmax*abmax; k++)
			{
				if(dp[i][j][k] == inf) continue;
				dp[i+1][j][k] = min(dp[i+1][j][k], dp[i][j][k]);
				dp[i+1][j+a[i]][k+b[i]] = min(dp[i+1][j+a[i]][k+b[i]], dp[i][j][k]+c[i]);
			}
		}
	}

	int ans = inf;
	for(int i = 1; i <= nmax*abmax; i++)
	{
		for(int j = 1; j <= nmax*abmax; j++)
		{
			if(i*Mb == j*Ma) ans = min(ans, dp[N][i][j]);
		}
	}

	if(ans == inf) ans = -1;
	cout << ans << endl;

	return 0;
}
