#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int cnt = 0;
	for(int i = 1; i <= N; i++)
	{
		string s = to_string(i);
		if(s.size() % 2 != 0) cnt++;
	}

	cout << cnt << endl;

	return 0;
}
