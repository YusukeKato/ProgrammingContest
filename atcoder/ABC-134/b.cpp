#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	long long int N, D;
	cin >> N >> D;

	long long int DD = D * 2 + 1;
	long long int NN = N / DD;
	if(N % DD != 0) NN++;

	cout << NN << endl;

	return 0;
}
