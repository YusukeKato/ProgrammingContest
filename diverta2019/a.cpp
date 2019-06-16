#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;

	int ans = N - K + 1;
	if(ans < 0) ans = 0;

	cout << ans << endl;

	return 0;
}
