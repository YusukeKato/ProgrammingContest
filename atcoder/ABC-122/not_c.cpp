#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;

    string S;
    cin >> S;

    int L[Q];
    int R[Q];

    for(int i = 0; i < Q; i++)
    {
        //scanf("%d%d", &L[i], &R[i]);
        cin >> L[i] >> R[i];
    }

    // count 'AC' by 100
    int cnt_by_step[1024];
    for(int i = 0; i < 1024; i++)
    {
        cnt_by_step[i] = -1;
    }

    int step = 100;
    int tgt = N / step;
    for(int i = 0; i < tgt; i+=step)
    {
        int cnt = 0;
        for(int j = i; j < i+step-1; j++)
        {
            if(S[i] == 'A' and S[i+1] == 'C')
            {
                cnt++;
            }
        }
        cnt_by_step[i] = cnt;
    }

    // calc
    for(int i = 0; i < Q; i++)
    {
        int L2 = L[i];
        int R2 = R[i];

        if(R2 - L2 < 200)
        {
            int ans = 0;
            for(int j = L2-1; j < R2-1; j++)
            {
                if(S[j] == 'A' and S[j+1] == 'C')
                {
                    ans++;
                }
            }
            cout << ans << endl;
            continue;
        }

        int ans = 0;
        // start ----------------------------
        int s_val = L2 / 100;
        s_val *= 100;

        int s_index = 0;
        s_index = s_val / 100 + 1;
    
        //s_index*100+1 のプラス1は境界をカバーするため
        for(int j = L2-1; j < s_index*100; j++)
        {
            if(S[j] == 'A' and S[j+1] == 'C')
            {
                ans++;
            }
        }

        // middle --------------------------
        int e_val = R2 / 100;
        e_val *= 100;

        int e_index = e_val / 100;

        for(int j = s_index; j < e_index; j++)
        {
            ans += cnt_by_step[j];
        }

        // end ----------------------------
        //e_val*100-1のマイナス1は境界をカバーするため
        for(int j = e_val*100-2; j < R2-1; j++)
        {
            if(S[j] == 'A' and S[j+1] == 'C')
            {
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
