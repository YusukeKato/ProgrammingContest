#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	vector<int> A(100010);
	vector<int> B(100010);
	vector<pair<int, int>> C;
	for(int i = 0; i < N; i++)
	{
		cin >> A[i] >> B[i];
		C.push_back(make_pair(B[i], A[i]));
	}

	sort(C.begin(), C.end());

	int cnt = 0;
	long long int ans = 0;
	while(cnt <= M)
	{
		for(int i = C.size()-1; i >= 0; i--)
		{
			if(cnt + C[i].second <= M)
			{
				ans += C[i].first;
				C.erase(C.begin() + i);
				break;
			}
		}
		cnt++;
	}

	cout << ans << endl;

	return 0;
}
