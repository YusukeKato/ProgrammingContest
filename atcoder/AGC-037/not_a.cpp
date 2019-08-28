#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
using namespace std;

int main()
{
	string s;
	cin >> s;

	string sub = "";

	int ans = 0;
	for(int i = 0; i < s.size(); i++)
	{
		string s2 = "";
		for(int j = i; j < s.size(); j++)
		{
			s2 += s[i];
			if(s2.size() != sub.size()) break;
			else
			{
				bool flag = true;
				for(int k = 0; k < s2.size(); k++)
				{
					if(s2[k] != sub[k])
					{
						flag = false;
						break;
					}
				}
				if(flag == true) i++;
				else break;
			}
		}

//		cout << "test" << endl;
//		cout << i << endl;
//		cout << sub << endl;
//		cout << s2 << endl;
//		cout << "ans1:" << ans << endl;

		//last
		if(i >= s.size()-1 and s2.size() == sub.size())
		{
			bool flag = true;
			for(int k = 0; k < s2.size(); k++)
			{
				if(s2[k] != sub[k])
				{
					flag = false;
					break;
				}
			}
			if(flag == true) ans--;
		}

		ans++;
		sub = s2;
//		cout << "ans2:" << ans << endl;
	}

	cout << ans << endl;

	return 0;
}
