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

	vector<int> v(N, 0);
	vector<int> c(N, 0);

	for(int i = 0; i < N; i++) cin >> v[i];
	for(int i = 0; i < N; i++) cin >> c[i];

	int sum = 0;
	for(int i = 0; i < N; i++)
	{
		int a = v[i] - c[i];
		if(a > 0) sum += a;
	}

	cout << sum << endl;

	return 0;
}
