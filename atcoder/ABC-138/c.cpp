#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	long long N;
	cin >> N;
	vector<long long> V(N);
	for(int i = 0; i < N; i++) cin >> V[i];

	sort(V.begin(), V.end());

	double ans = V[0];
	for(int i = 1; i < N; i++)
	{
		ans += (double)V[i];
		ans = (double)(ans / 2.0);
	}

	cout << setprecision(10) << ans << endl;
	
	return 0;
}
