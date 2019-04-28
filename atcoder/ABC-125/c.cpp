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

	vector<long long> left(N, 0);
	vector<long long> right(N, 0);

	long long tmp = v[0];
	left[0] = v[0];
	for(int i = 1; i < N; i++)
	{
		tmp = gcd(tmp, v[i]);
		left[i] = tmp;
	}
	tmp = v[N-1];
	right[N-1] = v[N-1];
	for(int i = N-2; i >= 0; i--)
	{
		tmp = gcd(tmp, v[i]);
		right[i] = tmp;
	}

	long long ans = 0;
	for(int i = 0; i < N; i++)
	{
		long long sub;
		if(i == 0) sub = right[i+1]; 
		else if(i == N-1) sub = left[i-1];
		else sub = gcd(left[i-1], right[i+1]);

		if(ans < sub) ans = sub;
	}

	cout << ans << endl;

	return 0;
}
