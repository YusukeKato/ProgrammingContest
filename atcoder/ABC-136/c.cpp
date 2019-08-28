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
	vector<int64_t> H(100010);

	for(int i = 0; i < N; i++) cin >> H[i];

	if(N == 1)
	{
		cout << "Yes" << endl;
		return 0;
	}

	int64_t max = 0;
	for(int i = 0; i < N; i++)
	{
		if(max < H[i]) max = H[i];
		else if(max - H[i] >= 2)
		{
			cout << "No" << endl;
			return 0;
		}
	}

	cout << "Yes" << endl;

	return 0;
}
