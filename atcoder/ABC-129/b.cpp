#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> w(n);
	int max = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> w[i];
		max += w[i];
	}

	int min = 0;
	int cnt = 999999999;
	for(int i = 0; i < n; i++)
	{
		min += w[i];
		max -= w[i];
		if(cnt > abs(max-min)) cnt = abs(max-min);
	}

	cout << cnt << endl;

	return 0;
}
