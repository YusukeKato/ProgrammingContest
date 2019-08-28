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
	long long A[1010];
	for(int i = 0; i < N; i++) cin >> A[i];

	double sum = 0;
	for(int i = 0; i < N; i++)
	{
		sum += (double)(1.0 / A[i]);
	}

	sum = (double)(1.0 / sum);
	
	cout << setprecision(10) << sum << endl;

	return 0;
}
