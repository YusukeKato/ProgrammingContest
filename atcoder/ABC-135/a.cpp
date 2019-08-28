#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int64_t A, B;
	cin >> A >> B;

	int64_t C = abs(A - B);

	if(C % 2 != 0)
	{
		cout << "IMPOSSIBLE" << endl;
		return 0;
	}

	C /= 2;
	C += min(A, B);
	cout << C << endl;

	return 0;
}
