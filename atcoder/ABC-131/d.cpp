#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<pair<long long int, long long int>> p;

	for(int i = 0; i < N; i++)
	{
		long long int a, b;
		cin >> a >> b;
		p.push_back(make_pair(b, a));
	}

	sort(p.begin(), p.end());

	long long int cnt = 0;
	for(int i = 0; i < N; i++)
	{
		cnt += p[i].second;
		if(cnt > p[i].first)
		{
			cout << "No" << endl;
			return 0;
		}
	}

	cout << "Yes" << endl;
	return 0;
}
