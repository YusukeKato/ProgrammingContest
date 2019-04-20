#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int N;
	string S;
	cin >> N >> S;

	vector<int> v(N+1, 0);

	for(int i = 0; i < N; ++i)
	{
		if(S[i] == '#') v[i+1] = v[i] + 1;
		else v[i+1] = v[i];
	}

	long long ans = 2e6;
	for(int i = 0; i < N+1; ++i)
	{
		long long tmp = v[i] + ((N - i) - (v[N] - v[i]));
		ans = min(ans, tmp);
	}

	cout << ans << endl;
	return 0;
}
