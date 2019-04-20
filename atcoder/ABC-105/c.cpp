#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main()
{
	ll trueA[32];
	ll falseA[32];
	
	ll tmp = 1;
	for(int i = 0; i < 32; ++i)
	{
		trueA[i] = tmp;
		falseA[i] = -1 * tmp;
		tmp *= -2;
	}

	ll N;
	cin >> N;

	//for(int i = 0; i < 32; ++i) cout << trueA[i] << endl;
	//for(int i = 0; i < 32; ++i) cout << falseA[i] << endl;

	//1,-2,4,-8,16,-32,64,-128, ......
	//1,2,4,8,16,32,64,128, ......
	//奇数：正
	//偶数：負
	vector<int> v;
	vector<int> v2;
	while(N != 0)
	{
		ll minval = 9999999999999;
		int idx = 0;
		int pt = 0;
		for(int i = 0; i < 32; ++i)
		{
			ll a = N - trueA[i];
			ll b = N - falseA[i];
			ll c = 0;
			if(abs(a) <= abs(b))
			{
				c = a;
			}
			else
			{
				c = b;
			}

			if(abs(minval) > abs(c))
			{
				minval = c;
				idx = i;
				if(a <= b) pt = 1;
				else pt = 0;
			}
		}

		if(pt == 1) N -= trueA[idx];
		else N -= falseA[idx];
		v.push_back(idx);
		v2.push_back(pt);
	}

	vector<int> v3;
	for(int i = 0; i < v.size(); ++i)
	{
		if(v2[i] == 1)
		{
			v3.push_back(v[i]);
		}
		else
		{
			v3.push_back(v[i]);
			v3.push_back(v[i]+1);
		}
	}

	//sort(v.begin(), v.end());
	//sort(v2.begin(), v2.end());
	sort(v3.begin(), v3.end());

	//for(int i = 0; i < v.size(); ++i) cout << v[i];
	//cout << endl;
	//for(int i = 0; i < v2.size(); ++i) cout << v2[i];
	//cout << endl;

	for(int i = v3[v3.size()-1]; i >= 0; --i)
	{
		bool flag = false;
		for(int j = 0; j < v3.size(); ++j)
		{
			if(i == v3[j]) flag = true;
		}
		if(flag == true) cout << '1';
		else cout << '0';
	}
	cout << endl;

	return 0;
}
