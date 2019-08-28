#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	int A[200010] = {0};
	cin >> N;

	int max = -1;
	int max2 = -1;
	for(int i = 0; i < N; i++)
	{
		cin >> A[i];
		if(A[i] > max) max = A[i];
		else if(A[i] > max2) max2 = A[i];
	}

	for(int i = 0; i < N; i++)
	{
		if(A[i] == max) cout << max2 << endl;
		else cout << max << endl;
	}

	return 0;
}
