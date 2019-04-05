#include <iostream>
#include <string>
#include <sstream>
#include <bitset>
using namespace std;

int main()
{
    int N; 
    cin >> N;

    int F[N][10];
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            cin >> F[i][j];
        }
    }

    int P[N][11];
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < 11; j++)
        {
            cin >> P[i][j];
        }
    }

    long long ans = -(1<<30);
    for(int i = 1; i < 1<<10; i++)
    {
        stringstream ss;
        ss << static_cast<bitset<10>>(i);        
        string s = ss.str();
        int A[10];
        for(int j = 9; j >= 0; j--)
        {
            A[j] = s[j] - '0';
        }

        long long sub = 0;
        for(int j = 0; j < N; j++)
        {
            int cnt = 0;
            for(int k = 0; k < 10; k++)
            {
                //if(A[k] == 1 and F[j][k] == 1)
                if((i>>k&1) and F[j][k] == 1)
                {
                    cnt++;
                }
            }
            sub += P[j][cnt];
        }

        ans = max(ans, sub);
    }

    cout << ans << endl;

    return 0;
}
