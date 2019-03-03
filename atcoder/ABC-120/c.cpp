#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int c0 = 0;
    int c1 = 0;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '0') c0++;
        else if(s[i] == '1') c1++;
    }

    int res = min(c0, c1);
    cout << res*2 << endl;

    return 0;
}