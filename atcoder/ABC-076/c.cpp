#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string s;
    string t;
    cin >> s;
    cin >> t;

    vector<string> v;
    for(int i = 0; i < s.size(); i++)
    {
        for(int j = 0; j < t.size(); j++)
        {
            if(s[i] == t[j] and i-j >= 0 and i+(t.size()-j)-1 < s.size())
            {
                bool flag = true;
                string sub = s;
                for(int k = i-j, n = 0; k < i+(t.size()-j) and n < t.size(); k++, n++)
                {
                    if(s[k] != t[n] and s[k] != '?')
                    {
                        flag = false;
                    }
                    else
                    {
                        sub[k] = t[n];
                    }
                }
                if(flag == true)
                {
                    for(int k = 0; k < sub.size(); k++)
                    {
                        if(sub[k] == '?')
                        {
                            sub[k] = 'a';
                        }
                    }
                    v.push_back(sub);
                }
            }
        }
    }

    int tlen = t.size();
    for(int i = 0; i < s.size(); i++)
    {
        string sub = s;
        bool flag = true;
        for(int j = i; j < i+tlen; j++)
        {
            if(sub[j] != '?') flag = false;
        }
        if(flag == true)
        {
            for(int j = i, n = 0; j < i+tlen; j++, n++)
            {
                sub[j] = t[n];
            }
            for(int j = 0; j < sub.size(); j++)
            {
                if(sub[j] == '?') sub[j] = 'a';
            }
            v.push_back(sub);
        }
    }

    if(v.size() > 0)
    {
        sort(v.begin(), v.end());
        cout << v[0] << endl;
    }
    else
    {
        cout << "UNRESTORABLE" << endl;
    }

    return 0;
}
