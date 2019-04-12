#include <iostream>
#define int long long
using namespace std;

char s[2010][2010];
int u[2010][2010];
int d[2010][2010];
int r[2010][2010];
int l[2010][2010];

signed main()
{
    int N, M;
    cin >> N >> M;

    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < M; ++j)
        {
            cin >> s[i][j];
        }
    }

    for(int i = 0; i < N; ++i)
    {
        int cnt = 0;
        for(int j = M-1; j >= 0; --j)
        {
            if(s[i][j] == '#') cnt = 0;
            r[i][j] = cnt;
            if(s[i][j] == '.') cnt++;
        }
    }

    for(int i = 0; i < N; ++i)
    {
        int cnt = 0;
        for(int j = 0; j < M; ++j)
        {
            if(s[i][j] == '#') cnt = 0;
            l[i][j] = cnt;
            if(s[i][j] == '.') cnt++;
        }
    }

    for(int j = 0; j < M; ++j)
    {
        int cnt = 0;
        for(int i = N-1; i >= 0; --i)
        {
            if(s[i][j] == '#') cnt = 0;
            d[i][j] = cnt;
            if(s[i][j] == '.') cnt++;
        }
    }

    for(int j = 0; j < M; ++j)
    {
        int cnt = 0;
        for(int i = 0; i < N; ++i)
        {
            if(s[i][j] == '#') cnt = 0;
            u[i][j] = cnt;
            if(s[i][j] == '.') cnt++;
        }
    }

    long long ans = 0;
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < M; ++j)
        {
            ans += u[i][j] * l[i][j];
            ans += d[i][j] * r[i][j];
            ans += r[i][j] * u[i][j];
            ans += l[i][j] * d[i][j];
        }
    }
    cout << ans << endl;

    return 0;
}
