#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	string s;
	cin >> s;

	if(s[0] == s[1] or s[1] == s[2] or s[2] == s[3]) cout << "Bad" << endl;
	else cout << "Good" << endl;

	return 0;
}
