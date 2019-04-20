#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long ll;

int main()
{
	ll N, K;
	cin >> N >> K;
	string S;
	cin >> S;

	if(S[S.size()-1] == '1') S += '0';
	else S += '1';

	vector<ll> v;
	vector<ll> v2;

	ll i = 1;
	ll cnt = 1;
	char m = S[0];
	while(i < S.size())
	{
		if(S[i] == m)
		{
			++cnt;
			++i;
		}
		else
		{
			v.push_back(cnt);
			if(m == '0') v2.push_back(0);
			else v2.push_back(1);
			m = S[i];
			++i;
			cnt = 1;
		}
	}

	//for(ll i = 0; i < v.size(); ++i) cout << v[i] << endl;

	

	return 0;
}
