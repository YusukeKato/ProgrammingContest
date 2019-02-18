// TLE するコード

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
        cin >> p[i] >> q[i];
    }

    // 質問の範囲内にある列車をカウント、p,q も1から始まるから1引く
    for(int i = 0; i < Q; i++)
    {
        int count = 0;
        for(int j = p[i]-1; j <= q[i]-1; j++)
        {
            for(int k = p[i]-1; k <= q[i]-1; k++)
            {
                count += g[j][k];
            }
        }
        // 出力
        cout << count << endl;
    }

    return 0;
}
