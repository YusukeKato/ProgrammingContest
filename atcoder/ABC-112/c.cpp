#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> x(101, 0);
	vector<int> y(101, 0);
	vector<int> h(101, 0);
	for(int i = 0; i < N; i++)
	{
		cin >> x[i] >> y[i] >> h[i];
	}

	int xx = 0;
	int yy = 0;
	for(int i = 0; i <= 100; i++)
	{
		for(int j = 0; j <= 100; j++)
		{
			int p = abs(i - x[0]) + abs(j - y[0]) + h[0];
			bool flag = true;
			for(int n = 1; n < N; n++)
			{
				int p2 = abs(i - x[n]) + abs(j - y[n]) + h[n];
				if(p != p2) flag = false;
			}
			if(flag == true)
			{
				xx = i;
				yy = j;
			}
		}
	}

	
	int hh = h[0] + abs(x[0] - xx) + abs(y[0] - yy);

	cout << xx << " " << yy << " " << hh << endl;

	return 0;
}
