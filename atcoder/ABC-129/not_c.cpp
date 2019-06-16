#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

long long fibo(long long a, long long b)
{
	return a + b;
}

int main()
{
	vector<long long> memo(100010);
	memo[0] = 1;
	memo[1] = 1;
	memo[2] = 1;
	for(int i = 3; i <= 100000; i++)
	{
		memo[i] = memo[i-1] + memo[i-2];
		//memo[i] %= 1000000007;
	}

	int n, m;
	cin >> n >> m;
	vector<int> v(m);
	for(int i = 0; i < m; i++)
	{
		cin >> v[i];
	}

	//---
	for(int i = 0; i < m-1; i++)
	{
		if(v[i+1] - v[i] == 1)
		{
			cout << '0' << endl;
			return 0;
		}
	}
	//---

	long long res = 1;
	if(v.size() > 0) res *= memo[v[0]];
	res %= 1000000007;
	for(int i = 0; i < m-1; i++)
	{
		res %= 1000000007;
		int idx = v[i+1] - (v[i]+1);
		res *= memo[idx];
		res %= 1000000007;
	}
	int idx2;
	if(v.size() > 0) idx2 = n - (v[v.size()-1]);
	else idx2 = n;
	res *= memo[idx2];

	long long res2 = res % 1000000007;
	cout << res2 << endl;

	return 0;
}
