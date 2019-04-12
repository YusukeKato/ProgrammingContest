#include <iostream>
using namespace std;
typedef long long ll;

int main()
{
	ll N;
	cin >> N;
	ll ans = 0;
	for(int i = 0; i < N; i++)
	{
		ll a;
		cin >> a;
		ans += a-1;
	}

	cout << ans << endl;

	return 0;
}
