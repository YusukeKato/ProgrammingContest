#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

long long gcd(long long a, long long b)
{
	if(b == 0) return a;
	return gcd(b, a % b);
}

int main()
{
	long long N;
	cin >> N;

	vector<long long> v(N, 0);
	for(int i = 0; i < N; i++) cin >> v[i];

	long long minval = 1e10;
	long long maxval = 0;
	int idx = -1;
	int idx2 = -1;
	for(int i = 0; i < N-1; i++)
	{
		int a = gcd(v[i], v[i+1]);
		if(a < minval)
		{
			idx = i;
			minval = a;
		}
		if(a > maxval)
		{
			idx2 = i;
			maxval = a;
		}
	}

	long long subv1 = v[idx];
	long long subv2 = v[idx+1];

	long long subv21 = v[idx2];
	long long subv22 = v[idx2+1];

	vector<long long> tt(4);

	v[idx] = subv21;
	v[idx+1] = subv2;
	tt[0] = v[0];
	for(int i = 1; i < N; i++)
	{
		tt[0] = gcd(tt[0], v[i]);
	}

	v[idx] = subv1;
	v[idx+1] = subv21; 
	tt[1] = v[0];
	for(int i = 1; i < N; i++)
	{
		tt[1] = gcd(tt[1], v[i]);
	}

	v[idx] = subv22;
	v[idx+1] = subv2;
	tt[2] = v[0];
	for(int i = 1; i < N; i++)
	{
		tt[2] = gcd(tt[2], v[i]);
	}

	v[idx] = subv1;
	v[idx+1] = subv22; 
	tt[3] = v[0];
	for(int i = 1; i < N; i++)
	{
		tt[3] = gcd(tt[3], v[i]);
	}

	//output
	long long ans = 0;
	for(int i = 0; i < 4; i++)
	{
		if(tt[i] > ans) ans = tt[i];
	}
	cout << ans << endl;

	return 0;
}
