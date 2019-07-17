#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int R, G, B, N;
	cin >> R >> G >> B >> N;

	long long cnt = 0;
	for(int i = 0; i <= 3000; i++)
	{
		for(int j = 0; j <= 3000; j++)
		{
			int r = R*i;
			int g = G*j;
			if(r+g > N) continue;
			int sum = N - r - g;
			if(sum % B == 0) cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}
