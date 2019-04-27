#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int A,B,T;
	cin >> A >> B >> T;

	int c = T / A;

	cout << B*c << endl;

	return 0;
}
