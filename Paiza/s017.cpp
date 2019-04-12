#include <iostream>
using namespace std;

int main()
{
    int N, M, S;
    cin >> N >> M >> S;

    int mp[N][N];
    for(int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        for(int j = 0; j < N; j++)
        {
            mp[i][j] = s[j] - '0';
        }
    }

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            
        }
    }
    return 0;
}
