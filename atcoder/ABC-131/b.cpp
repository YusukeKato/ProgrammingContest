#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int N, L;
	cin >> N >> L;

	int ans = 0;
	int min = 99999999;
	for(int i = 1; i <= N; i++)
	{
		int tmp = L + i - 1;
		ans += tmp;
		if(abs(tmp) < abs(min)) min = tmp;
	}

	ans -= min;

	cout << ans << endl;

	return 0;
}
