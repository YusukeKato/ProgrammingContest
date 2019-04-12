#include <iostream>
#include <string>
#include <vector>
#include <bitset>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> S(N);
    for(int i = 0; i < N; i++) cin >> S[i];

    int M;
    cin >> M;
    int P[M][N];
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cin >> P[i][j];
        }
    }

    vector<string> v;
    for(int i = 0; i < (1<<M); i++)
    {
        vector<int> sub(N);
        vector<int> sub2(N);
        for(int j = 0; j < N; j++) sub[j] = S[j];
        for(int j = 0; j < N; j++) sub2[j] = S[j];

        for(int j = 0; j < M; j++)
        {
            if(i>>j&1)
            {
                for(int k = 0; k < N; k++)
                {
                    sub[P[j][k]-1] = sub2[k];
                }
                for(int k = 0; k < N; k++)
                {
                    sub2[k] = sub[k];
                }
            }
        }

        string ans = "";
        for(int j = 0; j < N; j++)
        {
            ostringstream oss;
            oss << sub[j];
            ans += oss.str();
        }

        v.push_back(ans);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < N; i++)
    {
        if(i == N-1) cout << v[0][i] << endl;
        else cout << v[0][i] << " ";
    }

    return 0;
}
