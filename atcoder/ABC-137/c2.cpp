#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	cin >> N;
	map<string, long long int> mp;
	for(int i = 0; i < N; i++)
	{
		string s;
		cin >> s;
		sort(s.begin(), s.end());
		mp[s]++;
	}

	long long int ans = 0;
	for(auto& p : mp)
	{
		long long int k = p.second;
		ans += (long long int)(k * (k-1) / 2);
	}
	cout << ans << endl;
	return 0;
}
