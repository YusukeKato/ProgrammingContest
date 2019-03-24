#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int cnt = 0;
    for(int i = 0; i < S.length(); i++)
    {
        if(S[i] == 'A' or S[i] == 'T' or S[i] == 'C' or S[i] == 'G')
        {
            for(int j = i; j < S.length(); j++)
            {
                if(S[j] == 'A' or S[j] == 'T' or S[j] == 'C' or S[j] == 'G')
                {
                    int ans = j - i + 1;
                    cnt = max(cnt, ans);
                }
                else
                {
                    break;
                }
            }
        }
    }

    cout << cnt << endl;

    return 0;
}
