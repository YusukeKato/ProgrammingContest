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
	long long int a[100010] = {0};
	for(int i = 0; i < N; i++) cin >> a[i];

	long long int res = 0;
	for(int i = 0; i < N; i++)
	{
		res = res ^ a[i];
	}

	if(res == 0) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
