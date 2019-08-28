#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	long long N;
	cin >> N;
	string s;
	cin >> s;

	if(N >= 3200) cout << s << endl;
	else cout << "red" << endl;
	
	return 0;
}
