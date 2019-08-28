#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int64_t N;
	cin >> N;

	vector<int64_t> v(51, 0);
	vector<int64_t> v2(51, 0);

	for(int i = 0; i < N; i++) cin >> v[i];
	for(int i = 0; i < N; i++) v2[i] = i+1;

	int64_t cnt = 0;

	for(int i = 0; i < N; i++)
	{
		if(v[i] != v2[i]) cnt++;
	}

	if(cnt == 0 or cnt == 2) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}
