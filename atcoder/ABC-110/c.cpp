#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string S, T;
	cin >> S;
	cin >> T;

	vector<int> ans_s;
	vector<int> vsi;
	vector<char> vsc;
	for(int i = 0; i < S.size(); i++)
	{
		bool flag = false;
		int idx = -1;
		for(int j = 0; j < vsc.size(); j++)
		{
			if(S[i] == vsc[j])
			{
				flag = true;
				idx = j;
			}
		}
		if(flag == true)
		{
			ans_s.push_back(vsi[idx]);
		}
		else
		{
			ans_s.push_back(vsi.size());
			vsi.push_back(vsi.size());
			vsc.push_back(S[i]);
		}
	}

	vector<int> ans_t;
	vector<int> vti;
	vector<char> vtc;
	for(int i = 0; i < T.size(); i++)
	{
		bool flag = false;
		int idx = -1;
		for(int j = 0; j < vtc.size(); j++)
		{
			if(T[i] == vtc[j])
			{
				flag = true;
				idx = j;
			}
		}
		if(flag == true)
		{
			ans_t.push_back(vti[idx]);
		}
		else
		{
			ans_t.push_back(vti.size());
			vti.push_back(vti.size());
			vtc.push_back(T[i]);
		}
	}

	bool flag = true;
	for(int i = 0; i < ans_s.size(); i++)
	{
		if(ans_s[i] != ans_t[i]) flag = false;
	}

	if(flag == true) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}
