#include <iostream>
using namespace std;

int main()
{
    // 入力
    int N, M, Q;
    cin >> N >> M >> Q;

    // 二次元配列に列車の区間を保存、g[始都市][終都市]
    int g[N][N];
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            g[i][j] = 0;
        }
    }
    // L,R は1から始まるから1引く
    for(int i = 0; i < M; i++)
    {
        int L, R;
        cin >> L >> R;
        g[L-1][R-1] += 1;
    }

    // 質問
    int p[Q] = {0};
    int q[Q] = {0};
    for(int i = 0; i < Q; i++)
    {
        int a, b;
        cin >> a >> b;
        p[i] = a - 1;
        q[i] = b - 1;
    }

    // g配列を動的にカウント
    int g2[N][N];
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            g2[i][j] = 0;
        }
    }
    // g2[N-1][0]を初期化
    g2[N-1][0] = g[N-1][0];
    // 端から入れていく
    for(int i = N-2; i >= 0; i--)
    {
        g2[i][0] = g2[i+1][0] + g[i][0];
    }

    for(int i = 1; i < N; i++)
    {
        g2[N-1][i] = g2[N-1][i-1] + g[N-1][i];
    }

    // 中を入れていく
    for(int i = N-2; i >= 0; i--)
    {
        for(int j = 1; j < N; j++)
        {
            g2[i][j] = g[i][j] + g2[i+1][j] + g2[i][j-1] - g2[i+1][j-1];
        }
    }

    // 目的の区間にある列車の数を出力
    for(int i = 0; i < Q; i++)
    {
        cout << g2[p[i]][q[i]] << endl;
    }

    return 0;
}