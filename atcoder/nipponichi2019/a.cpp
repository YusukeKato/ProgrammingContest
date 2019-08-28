#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
typedef long long ll;

int main()
{
	int M, D;
	cin >> M >> D;
	
	int cnt = 0;
	for(int i = 1; i <= M; i++) {
		for(int d = 22; d <= D; d++) {
			string s = to_string(d);
			int d1 = s[1] - '0';
			int d2 = s[0] - '0';
			if(d1 < 2 or d2 < 2) continue;
			if(d1 * d2 == i) cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}
