#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int N, X;
	cin >> N >> X;
	vector<int> L(101);
	for(int i = 0; i < N; i++) cin >> L[i];

	int d = 0;
	d += L[0];
	if(d > X) cout << '1' << endl;
	for(int i = 2; i <= N; i++)
	{
		d = d + L[i-1];
		if(d > X)
		{
			cout << i << endl;
			return 0;
		}
	}
	cout << N+1 << endl;

	return 0;
}
