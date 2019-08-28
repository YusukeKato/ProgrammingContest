#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<vector<int>> v(N+1);
	vector<int> c(N+1, 1);
	for(int i = 1; i < N; i++)
	{
		int a;
		cin >> a;
		v[a-1].push_back(i);
	}

	for(int i = N-1; i >= 0; i--)
	{
		if(v[i].size() == 0) continue;
		int maxv = 1;
		int minv = 1<<29;
		for(auto& t: v[i])
		{
			maxv = max(maxv, c[t]);
			minv = min(minv, c[t]);
		}
		c[i] = maxv + minv + 1;
	}

	cout << c[0] << endl;
	return 0;
}
