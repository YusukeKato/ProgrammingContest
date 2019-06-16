#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<long long> vu(100010);
	vector<long long> vv(100010);
	vector<long long> vw(100010);

	for(int i = 0; i < N-1; i++)
	{
		cin >> vu[i] >> vv[i] >> vw;
	}

	return 0;
}
