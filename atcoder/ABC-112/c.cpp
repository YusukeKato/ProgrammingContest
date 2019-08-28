#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
	const int MAX = 101;
	vector<int> xx(MAX);
	vector<int> yy(MAX);
	vector<ll> hh(MAX);
	int N;
	cin >> N;
	for(int i = 0; i < N; i++)
	{
		int x, y;
		ll h;
		cin >> x >> y >> h;
		xx[i] = x;
		yy[i] = y;
		hh[i] = h;
	}
	for(int cx = 0; cx < MAX; cx++)
	{
		for(int cy = 0; cy < MAX; cy++)
		{
			ll H;
			for(int i = 0; i < N; i++)
			{
				if(hh[i] != 0) H = hh[i] + (ll)abs(xx[i]-cx) + (ll)abs(yy[i]-cy);
			}
			bool flag = true;
			for(int i = 0; i < N; i++)
			{
				ll tmph = max(H - (ll)abs(xx[i]-cx) - (ll)abs(yy[i]-cy), 0LL);
				if(tmph != hh[i]) flag = false;
			}
			if(flag == true)
			{
				cout << cx << " " << cy << " " << H << endl;
				return 0;
			}
		}
	}

	return 0;
}
