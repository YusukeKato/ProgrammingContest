#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int K, X;
	cin >> K >> X;

	int min = X - K + 1;
	int max = X + K - 1;

	for(int i = min; i <= max; i++)
	{
		cout << i << endl;
	}

	return 0;
}
