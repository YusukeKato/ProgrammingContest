#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<char> sv;
    for(int i = 0; i < s.size()-1; i++)
    {
        if(('0' <= s[i] and s[i] <= '9') and ('a' <= s[i+1] and s[i+1] <= 'z'))
        {
            sv.push_back(s[i]);
            sv.push_back('(');
            sv.push_back(s[i+1]);
            sv.push_back(')');
            i++;
        }
        else
        {
            sv.push_back(s[i]);
        }
    }
    sv.push_back(s[s.size()-1]);

    for(int i = 0; i < sv.size(); i++)
    {
        cout << sv[i];
    }
    cout << endl;

    vector<pair<int, string>> v;
    string sub = "";
    int idx = 0;

    for(int i = 0; i < s.size(); i++)
    {
        //現在の文字
        char c = sv[i];

        if(c == '(')
        {
            if(sub.size() > 0)
            {
                pair<int, string> p = make_pair(idx, sub);
                v.push_back(p);
                sub = "";
            }
            idx++;
        }
        else if(c == ')')
        {
            if(sub.size() > 0)
            {
                pair<int, string> p = make_pair(idx, sub);
                v.push_back(p);
                sub = "";
            }
            idx--;
        }
        //数字だったら
        else if('0' <= c and c <= '9')
        {
            if(sub.size() > 0 and ('a' <= sub[0] and sub[0] <= 'z'))
            {
                pair<int, string> p = make_pair(idx, sub);
                v.push_back(p);
                sub = "";
            }
            sub += c;
        }
        //文字だったら
        else if('a' <= c and c <= 'z')
        {
            if(idx == 0)
            {
                sub = "";
                string cs{c};
                pair<int, string> p = make_pair(idx, cs);
                v.push_back(p);        
            }
            else
            {
                if(sub.size() > 0 and ('0' <= sub[0] and sub[0] <= '9'))
                {
                    pair<int, string> p = make_pair(idx, sub);
                    v.push_back(p);
                    sub = "";
                }
                sub += c;
            }
        }
    }

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }

    return 0;
}
