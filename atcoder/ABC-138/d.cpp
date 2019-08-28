#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;

vector<vector<int>> v(200010);
vector<long long int> cost(200010, 0);
vector<bool> r(200010, false);
vector<long long int> plusx(200010, 0);

void update(int p, long long int x)
{
	r[p] = true;
	x += plusx[p];
	cost[p] += x;
	for(auto& t: v[p])
	{
		if(p != t and r[t] == false) update(t, x);
	}
}

int main()
{
	long long N, Q;
	cin >> N >> Q;
	for(int i = 0; i < N-1; i++)
	{
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
	}
	for(int i = 0; i < Q; i++)
	{
		int p, x;
		cin >> p >> x;
		plusx[p] += x;
	}

	update(1, 0);

	for(int i = 1; i <= N; i++)
	{
		cout << cost[i] << endl;
	}

	return 0;
}
