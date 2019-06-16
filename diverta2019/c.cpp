#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<string> v;
	for(int i = 0; i < N; i++)
	{
		string s;
		cin >> s;
		v.push_back(s);
	}

	int pp = 0;
	int aa = 0;
	int bb = 0;
	int AB = 0;
	for(int i = 0; i < N; i++)
	{
		if(v[i][0] == 'B' and v[i][v[i].size()-1] == 'A') pp++;
		else if(v[i][v[i].size()-1] == 'A') aa++;
		else if(v[i][0] == 'B') bb++;
		for(int j = 0; j < v[i].size()-1; j++)
		{
			if(v[i][j] == 'A' and v[i][j+1] == 'B') AB++;
		}
	}

	/*
	cout << "pp:" << pp << endl;
	cout << "aa:" << aa << endl;
	cout << "bb:" << bb << endl;
	*/

	while(pp > 1)
	{
		pp--;
		AB++;
	}

	while(pp > 0 and aa > 0 and bb > 0)
	{
		pp--;
		aa--;
		bb--;
		AB += 2;
	}

	while(pp > 0 and aa > 0)
	{
		pp--;
		aa--;
		AB++;
	}

	while(pp > 0 and bb > 0)
	{
		pp--;
		bb--;
		AB++;
	}

	while(aa > 0 and bb > 0)
	{
		aa--;
		bb--;
		AB++;
	}

	cout << AB << endl;

	return 0;
}
