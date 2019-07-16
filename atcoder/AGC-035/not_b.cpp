#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	vector<pair<int, int>> p;
	int cnt[100010] = {0};
	for(int i = 0; i < M; i++)
	{
		int ai, bi;
		cin >> ai >> bi;
		cnt[ai]++;
		cnt[bi]++;
		p.push_back(make_pair(ai, bi));
	}

	bool flag = true;
	for(int i = 1; i <= N; i++)
	{
		if(cnt[i] % 2 != 0)
		{
			cout << "-1" << endl;
			return 0;
		}
	}

	//sort(p.begin(), p.end());

	for(int i = 0; i < p.size(); i++)
	{
		int p1 = p[i].first;
		int p2 = p[i].second;
		if(cnt[p1] % 2 != 0 and cnt[p2] % 2 == 0)
		{
			cnt[p1]--;
			cout << p1 << " " << p2 << endl;
		}
		else if(cnt[p1] % 2 == 0 and cnt[p2] % 2 != 0)
		{
			cnt[p2]--;
			cout << p2 << " " << p1 << endl;
		}
		else
		{
			cnt[p1]--;
			cout << p1 << " " << p2 << endl;
		}
	}

	return 0;
}
