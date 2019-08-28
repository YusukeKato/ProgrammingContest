#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	int d = c - (a - b);

	if(d < 0) cout << '0' << endl;
	else cout << d << endl;

	return 0;
}
