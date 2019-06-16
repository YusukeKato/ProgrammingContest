#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
	long double N;
	int K;
	cin >> N >> K;

	long double ans = 0;
	long double a = 1/N;
	for(int i = 1; i <= N; i++)
	{
		int b = 0;
		int t = i;
		while(t < K)
		{
			t *= 2;
			b++;
		}
		double c = pow(0.5, b);
		ans += a * c;
	}

	cout << setprecision(12) << ans << endl;

	return 0;
}
