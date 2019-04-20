#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
typedef long long ll;

int main()
{
	ll N;
	cin >> N;

	vector<ll> v;
	for(ll i = 0; i < 32; ++i)
	{
		ll a = pow(-2, i);
		v.push_back(a);
	}

	if(N == 0)
	{
		cout << '0' << endl;
	}

	vector<ll> idx;
	while(1)
	{
		ll diff = 999999999999;
		ll sub_idx = 0;
		for(ll i = 0; i < v.size(); i++)
		{
			ll a = N - v[i];
			if(a == 0)
			{
				idx.push_back(i);
				sort(idx.begin(), idx.end());
				for(ll j = 0; j < idx[idx.size()-1]; ++j)
				{
					bool flag = false;
					for(ll k = 0; k < idx.size(); ++k)
					{
						if(j == idx[k]) flag = true;
					}
					if(flag == true) cout << '1';
					else cout << '0';
				}
				cout << endl;
				return 0;
			}
			else if(abs(a) < abs(diff))
			{
				diff = a;
				sub_idx = i;
			}

			if(i == v.size()-1)
			{
				N -= v[sub_idx];
				idx.push_back(sub_idx);
			}
		}
	}

	return 0;
}
