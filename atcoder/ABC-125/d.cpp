#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<long long> v(N, 0);
	int cnt = 0;
	for(int i = 0; i < N; i++)
	{
		cin >> v[i];
		if(v[i] < 0) cnt++;
	}

	if(cnt % 2 != 0)
	{
		long long minval = 1e10;
		int idx = -1;
		for(int i = 0; i < N; i++)
		{
			if(minval > abs(v[i]))
			{
				minval = abs(v[i]);
				idx = i;
			}
		}

		for(int i = 0; i < N; i++)
		{
			if(i != idx) v[i] = abs(v[i]);
			else v[i] = -1 * abs(v[i]);
		}
	}
	else
	{
		for(int i = 0; i < N; i++)
		{
			v[i] = abs(v[i]);
		}
	}

	long long sum = 0;
	for(int i = 0; i < N; i++)
	{
		sum += v[i];
	}

	cout << sum << endl;
	return 0;
}
