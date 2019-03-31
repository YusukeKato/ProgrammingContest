#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;

    string S;
    cin >> S;

    int rcnt = 0;
    int bcnt = 0;

    for(int i = 0; i < N; i++)
    {
        if(S[i] == 'R') rcnt++;
        else bcnt++;
    }

    if(rcnt > bcnt) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
