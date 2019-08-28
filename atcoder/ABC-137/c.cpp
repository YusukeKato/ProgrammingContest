#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	vector<string> a(100010);
	vector<long long int> b;
	int N;
	cin >> N;
	for(int i = 0; i < N; i++)
	{
		string s;
		cin >> s;
		a[i] = s;
	}

	for(int i = 0; i < N; i++)
	{
		long long int c = 1;
		for(int j = 0; j < 10; j++)
		{
			int d = a[i][j] - 'a';
			if(d == 0) c *= 2;
			else if(d == 1) c *= 3;
			else if(d == 2) c *= 5;
			else if(d == 3) c *= 7;
			else if(d == 4) c *= 11;
			else if(d == 5) c *= 13;
			else if(d == 6) c *= 17;
			else if(d == 7) c *= 19;
			else if(d == 8) c *= 23;
			else if(d == 9) c *= 29;
			else if(d == 10) c *= 31;
			else if(d == 11) c *= 37;
			else if(d == 12) c *= 41;
			else if(d == 13) c *= 43;
			else if(d == 14) c *= 47;
			else if(d == 15) c *= 53;
			else if(d == 16) c *= 59;
			else if(d == 17) c *= 61;
			else if(d == 18) c *= 67;
			else if(d == 19) c *= 71;
			else if(d == 20) c *= 73;
			else if(d == 21) c *= 79;
			else if(d == 22) c *= 83;
			else if(d == 23) c *= 89;
			else if(d == 24) c *= 97;
			else if(d == 25) c *= 101;
		}
		b.push_back(c);
	}

	sort(b.begin(), b.end());

	//for(int i = 0; i < N; i++) cout << b[i] << endl;

	vector<long long int> k;
	vector<long long int> kv;
	k.push_back(b[0]);
	kv.push_back(1);


	for(int i = 1; i < N; i++)
	{
		if(k[k.size()-1] == b[i])
		{
			kv[kv.size()-1]++;
		}
		else
		{
			k.push_back(b[i]);
			kv.push_back(1);
		}
	}

	long long int cnt = 0;
	for(int i = 0; i < kv.size(); i++)
	{
		for(int j = 1; j < kv[i]; j++) cnt += j;
	}

	cout << cnt << endl;

	return 0;
}
