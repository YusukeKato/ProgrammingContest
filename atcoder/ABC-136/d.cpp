#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	string S;
	cin >> S;

	vector<int> ans;

	int cntr = 1;
	int cntl = 0;
	char flag = 'R';

	for(int i = 1; i < S.size(); i++)
	{
		if(i == S.size()-1) cntl++;

		if((flag == 'L' and S[i] == 'R') or i == S.size()-1)
		{
			int sum = cntr + cntl;
			int rr, ll;
			if(sum % 2 == 0)
			{
				rr = sum / 2;
				ll = sum / 2;
			}
			else
			{
				if(cntr > cntl)
				{
					if((cntr-1) % 2 == 0)
					{
						rr = sum / 2 + 1;
						ll = sum / 2;
					}
					else
					{
						rr = sum / 2;
						ll = sum / 2 + 1;
					}
				}
				else
				{
					if((cntl-1) % 2 == 0)
					{
						rr = sum / 2;
						ll = sum / 2 + 1;
					}
					else
					{
						rr = sum / 2 + 1;
						ll = sum / 2;
					}
				}
			}
			for(int j = 0; j < cntr-1; j++) ans.push_back(0);
			ans.push_back(rr);
			ans.push_back(ll);
			for(int j = 0; j < cntl-1; j++) ans.push_back(0);
			//init
			cntr = 0;
			cntl = 0;
		}

		if(S[i] == 'R') cntr++;
		else if(S[i] == 'L') cntl++;

		flag = S[i];
	}

	for(int i = 0; i < ans.size(); i++)
	{
		cout << ans[i];
		if(i != ans.size()-1) cout << " ";
	}
	cout << endl;

	return 0;
}
