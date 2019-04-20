#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long ll;

int main()
{
	string S;
	cin >> S;

	string S1 = "";
	string S2 = "";

	for(ll i = 0; i < S.size(); ++i)
	{
		if(i % 2 == 0)
		{
			S1 += "0";
			S2 += "1";
		}
		else
		{
			S1 += "1";
			S2 += "0";
		}
	}

	ll cnt1 = 0;
	ll cnt2 = 0;
	for(ll i = 0; i < S.size(); ++i)
	{
		if(S[i] != S1[i]) ++cnt1;
		if(S[i] != S2[i]) ++cnt2;
	}

	cout << min(cnt1, cnt2) << endl;

	return 0;
}
