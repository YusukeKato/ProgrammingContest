#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	long long N;
	cin >> N;

	if(N == 0)
	{
		cout << '0' << endl;
		return 0;
	}

	vector<char> ans;

	while(N != 0)
	{
		int r = N % 2;
		if(r == -1) r = 1;

		char c = (char)('0' + r);
		ans.push_back(c);

		N = (N - r) / (-2);
	}

	reverse(ans.begin(), ans.end());

	for(int i = 0; i < ans.size(); i++)
	{
		cout << ans[i];
	}
	cout << endl;

	return 0;
}
