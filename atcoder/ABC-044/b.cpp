#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // 'a' - 'a' = 0;
    // 'z' - 'a' = 25
    int al[26] = {0};

    for(int i = 0; i < s.length(); i++)
    {
        al[s[i] - 'a'] += 1;
    }

    bool flag = true;
    for(int i = 0; i < 26; i++)
    {
        if(al[i] % 2 != 0) flag = false;
    }

    if(flag == true) cout << "Yes";
    else cout << "No";
}