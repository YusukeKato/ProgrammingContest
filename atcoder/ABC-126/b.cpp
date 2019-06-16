#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	string S;
	cin >> S;

	int a1 = S[0] - '0';
	int a2 = S[1] - '0';
	int b1 = S[2] - '0';
	int b2 = S[3] - '0';

	int a = a1*10 + a2;
	int b = b1*10 + b2;

	bool ya = false;
	bool ma = false;
	bool yb = false;
	bool mb = false;

	if(a >= 0 and a <= 99) ya = true;
	if(b >= 0 and b <= 99) yb = true;
	if(a >= 1 and a <= 12) ma = true;
	if(b >= 1 and b <= 12) mb = true;

	if(ya == true and ma == true and yb == true and mb == true)
	{
		cout << "AMBIGUOUS" << endl;
	}
	else if(ya == true and mb == true)
	{
		cout << "YYMM" << endl;
	}
	else if(ma == true and yb == true)
	{
		cout << "MMYY" << endl;
	}
	else
	{
		cout << "NA" << endl;
	}

	return 0;
}
