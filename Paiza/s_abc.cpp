#include <iostream>
#include <vector>
#include <string>
using namespace std;

string ss[50];

string func_k(int idx, int k)
{
    if(k == 1) return "ABC";
    else if(idx > k)
    {
        return ss[k-1];
    }
    else
    {
        string sk1 = func_k(idx, k-1);
        string s = "A" + sk1 + "B" + sk1 + "C";
        return s;
    }
}

int main()
{
    for(int i = 0; i < 20; i++)
    {
        cout << i << endl;
        ss[i] = func_k(i+1, i+1);        
    }
    cout << "end" << endl;

    int k, s, t;
    cin >> k >> s >> t;

    string ans = ss[k];

    for(int i = s-1; i < t; i++)
    {
        cout << ans[i];
    }
    cout << endl;

    return 0;
}
