#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int C[500];
    int S[500];
    int F[500];

    for(int i = 0; i < N-1; i++) cin >> C[i] >> S[i] >> F[i];

    for(int i = 0; i < N-1; i++)
    {
        int ans = 0;
        for(int j = i; j < N-1; j++)
        {
            if(ans < S[j]) 
            {
                ans = S[j];
                ans += C[j];
            }
            else
            {
                for(int k = 0; k <= 100; k++)
                {
                    if((ans + k) % F[j] == 0)
                    {
                        ans += k;
                        break;
                    }
                }
                ans += C[j];
            }
        }

        cout << ans << endl;
    }
    cout << '0' << endl;

    return 0;
}
