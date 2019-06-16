#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	long long W, H, x, y;
	double two = 2.0000000000;
	cin >> W >> H >> x >> y;

	double ans = (double)W * (double)H / two;

	if(W % 2 != 0 or H % 2 != 0)
	{
		cout << setprecision(10) << ans << ' ' << '0' << endl;
		return 0;
	}
	else
	{
		if(W / 2 == x and H / 2 == y)
		{
			cout << setprecision(10) << ans << ' ' << '1' << endl;
			return 0;
		}
		else
		{
			cout << setprecision(10) << ans << ' ' << '0' << endl;
			return 0;
		}
	}

	return 0;
}
