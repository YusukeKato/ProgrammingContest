#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <map>
using namespace std;
typedef long long ll;

int main()
{
	int N, M;
	cin >> N >> M;
	map<ll, int> mp;
	vector<int> P(M);
	vector<ll> Y(M);

	for(int i = 0; i < M; i++)
	{
		int p;
		ll y;
		cin >> p >> y;
		mp[y] = p;
		P[i] = p;
		Y[i] = y;
	}

	map<ll, int> cntm;
	vector<int> cntv(N+1, 1);
	auto begin = mp.begin();
	auto end = mp.end();
	for(auto iter = begin; iter != end; iter++)
	{
		cntm[iter->first] = cntv[iter->second];
		cntv[iter->second]++;
	}

	for(int i = 0; i < M; i++)
	{
		cout << setfill('0') << right << setw(6) << mp[Y[i]];
		cout << setfill('0') << right << setw(6) << cntm[Y[i]] << endl;
	}

	return 0;
}
