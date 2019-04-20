#include <iostream>
using namespace std;
typedef long long ll;

int main()
{
	ll D, G;
	cin >> D >> G;
	ll P[11];
	ll C[11];
	for(int i = 0; i < D; ++i)
	{
		cin >> P[i] >> C[i];
	}

	ll ans = 1e9;

	for(int i = 0; i < (1<<D); ++i)
	{
		ll point = 0;
		ll cnt = 0;
		ll maxval = -1;
		for(int j = 0; j < D; ++j)
		{
			if(i>>j & 1)
			{
				point += C[j];
				point += 100 * (j+1) * P[j];
				cnt += P[j];
			}
			else
			{
				maxval = j;
			}
		}

		if(point < G)
		{
			int s1 = 100 * (maxval + 1);
			int need = (G - point + s1 - 1) / s1;
			if(need >= P[maxval])
			{
				continue;
			}
			cnt += need;
		}

		ans = min(ans, cnt);
	}

	cout << ans << endl;

	return 0;
}
