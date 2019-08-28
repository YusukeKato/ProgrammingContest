#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int A, B;
	cin >> A >> B;

	int a = A+B;
	int b = A-B;
	int c = A*B;

	int d = max(a,b);
	int e = max(d,c);

	cout << e << endl;
	return 0;
}
