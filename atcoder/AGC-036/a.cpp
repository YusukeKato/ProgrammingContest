#include <iostream>
using namespace std;

int main()
{
	int64_t S;
	cin >> S;

	int64_t x1, y1, x2, y2;

	x1 = 1e9;
	x2 = 1;

	y2 = (S + x1 - 1) / x1;
	y1 = x1*y2 - S;

	cout << "0 0 " << x1 << " " << y1 << " " << x2 << " " << y2 << endl;

	return 0;
}
