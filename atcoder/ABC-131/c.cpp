#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;

long long int gcd(long long int a, long long int b)
{
	if(b == 0) return a;
	return gcd(b, a%b);
}

int main()
{
	long long int A, B, C, D;
	cin >> A >> B >> C >> D;

	long long int ans = B - A + 1;

	long long int g = gcd(D, C);
	long long int x = C / g * D;


	long long int a1 = (A-1) / C;
	long long int a2 = (A-1) / D;
	long long int a3 = (A-1) / x;

	long long int b1 = B / C;
	long long int b2 = B / D;
	long long int b3 = B / x;

	ans -= (b1+b2-b3) - (a1+a2-a3);

	cout << ans << endl;

	return 0;
}
