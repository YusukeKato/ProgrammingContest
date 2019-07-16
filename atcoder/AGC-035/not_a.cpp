#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	long long int N;
	cin >> N;
	long long int a[1000100] = {0};
	for(long long int i = 0; i < N; i++) cin >> a[i];

	for(long long int i = 0; i < N-2; i++)
	{
		long long int b = a[i] ^ a[i+2];
		if(a[i+1] != b)
		{
			cout << "No" << endl;
			return 0;
		}
	}

	long long int c = a[1] ^ a[N-1];
	if(a[0] != c)
	{
		cout << "No" << endl;
		return 0;
	}

	long long int d = a[0] ^ a[N-2];
	if(a[N-1] != d)
	{
		cout << "No" << endl;
		return 0;
	}

	cout << "Yes" << endl;
	return 0;
}
