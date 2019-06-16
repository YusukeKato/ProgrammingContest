#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	vector<int> a(3);
	cin >> a[0] >> a[1] >> a[2];

	sort(a.begin(), a.end());

	int cnt = 0;
	cnt += a[0];
	cnt += a[1];

	cout << cnt << endl;

	return 0;
}
