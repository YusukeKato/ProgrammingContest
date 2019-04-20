#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long ll;

int main()
{
	ll N;
	cin >> N;

	ll he = 0;
	ll cnt = 0;
	for(ll i = 0; i < N; ++i)
	{
		ll H;
		cin >> H;
		if(H >= he)
		{
			he = H;
			++cnt;
		}
	}

	cout << cnt << endl;

	return 0;
}
