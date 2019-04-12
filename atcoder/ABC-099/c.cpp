#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

vector<ll> v;
ll a6[] = {6,36,216,1296,7776,46656};
ll a9[] = {9,81,729,6561,59049};

void func(ll N, ll cnt)
{
	bool flag = true;
	//a6
	for(int i = 5; i >= 0; --i)
	{
		if(N >= a6[i])
		{
			++cnt;
			flag = false;
			if(N - a6[i] == 0)
			{
				v.push_back(cnt);
				return;
			}
			func(N-a6[i], cnt);
			--cnt;
			break;
		}
	}
	//a6
	for(int i = 4; i >= 0; --i)
	{
		if(N >= a9[i])
		{
			++cnt;
			flag = false;
			if(N - a9[i] == 0)
			{
				v.push_back(cnt);
				return;
			}
			func(N-a9[i], cnt);
			--cnt;
			break;
		}
	}
	//a1
	if(flag == true)
	{
		++cnt;
		if(N-1 == 0)
		{
			v.push_back(cnt);
			return;
		}
		func(N-1, cnt);
		return;
	}
	return;
}

int main()
{
	ll N;
	cin >> N;
	ll cnt = 0;
	func(N, cnt);

	ll minval = v[0];
	for(int i = 1; i < v.size(); i++)
	{
		if(minval > v[i]) minval = v[i];
	}

	cout << minval << endl;

	return 0;
}
