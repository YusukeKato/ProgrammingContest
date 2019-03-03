#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string s;
    cin >> s;
    //scanf("%s", s, N);

    if(s.length() == 0 || s.length() == 1)
    {
        //cout << 0 << endl;
        printf("%d\n", 0);
        return 0;
    }

    int count = 0;

    vector<int> v;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i-1] != s[i])
        {
            count++;
            v.push_back(i-1);
            s.erase(s.begin() + i-1, s.begin() + i+1);
        }
    }

    while(s.length() >= 2 && v.size() > 0)
    {
        int i = v.back();
        v.pop_back();
        if(s[i-1] != s[i])
        {
            count++;
            v.push_back(i-1);
            s.erase(s.begin() + i-1, s.begin() + i+1);
        }
    }

    //cout << (count*2) << endl;
    printf("%d\n", count*2);
    return 0;
}