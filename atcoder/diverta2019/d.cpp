#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	long long N;
	cin >> N;

	for(long long i = 1; i < N; i++)
	{
		long long a = (long long)N / i;
		long long b = (long long)N % i;
		//cout << "a:" << a << " b:" << b << endl;
		if(a == b) cout << i << endl;
	}

	return 0;
}
