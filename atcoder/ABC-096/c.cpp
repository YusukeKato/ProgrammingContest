#include <iostream>
using namespace std;
typedef long long ll;

int main()
{
	ll H, W;
	cin >> H >> W;
	char C[H][W];
	for(ll i = 0; i < H; ++i)
	{
		for(ll j = 0; j < W; ++j)
		{
			cin >> C[i][j];
		}
	}
	bool flag = true;
	for(ll i = 0; i < H; ++i)
	{
		for(ll j = 0; j < W; ++j)
		{
			if(C[i][j] == '#')
			{
				bool flag2 = false;
				if(i > 0 and C[i-1][j] == '#') flag2 = true;
				if(i < H-1 and C[i+1][j] == '#') flag2 = true;
				if(j > 0 and C[i][j-1] == '#') flag2 = true;
				if(j < W-1 and C[i][j+1] == '#') flag2 = true;
				if(flag2 == false)
				{
					flag = false;
					break;
				}
			}
		}
	}
	if(flag == true) cout << "Yes" << endl;
	else if(flag == false) cout << "No" << endl;

	return 0;
}
