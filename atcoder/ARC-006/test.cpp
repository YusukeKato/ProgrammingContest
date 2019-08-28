#include <iostream>
#include <map>
using namespace std;
typedef long long ll;

int main()
{
	map<ll, int> m;
	ll a = 12;
	ll b = 16;
	ll c = 11;
	for(int i = 2; i < 1000; i++) {
		ll I = (ll)i;
		ll A = a * I;
		ll B = b * I;
		ll C = c * I;
		m[A]++;
		m[B]++;
		m[C]++;
	}
	for(auto& t: m) {
		if(t.second > 1) cout << t.first << " " << t.second << endl;
	}
	cout << "end" << endl;
	return 0;
}
