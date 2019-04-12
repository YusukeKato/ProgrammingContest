#include <iostream>
using namespace std;

int main()
{
    int L, N, M;
    cin >> L >> N >> M;

    int A[M];
    int B[M];
    int C[M];

    for(int i = 0; i < M; i++)
    {
        cin >> A[i] >> B[i] >> C[i];
    }

    int H = L;
    int idx = 1;
    bool flag = true;
    while(flag == true)
    {
        int sub_i = 0;
        int sub_H = 0;
        bool type = true;
        bool flag_end = true;
        for(int i = 0; i < M; i++)
        {
            //idxと同じ
            if(A[i] == idx and B[i] < H)
            {
                if(sub_H < B[i])
                {
                    sub_H = B[i];
                    sub_i = i;
                    type = true;
                    flag_end = false;
                }
            }
            //idxの一つ左
            else if(A[i] == idx-1 and C[i] < H)
            {
                if(sub_H < C[i])
                {
                    sub_H = C[i];
                    sub_i = i;
                    type = false;
                    flag_end = false;
                }
            }
        }

        //これより上に横線がなければ出力して終了
        if(flag_end == true)
        {
            cout << idx << endl;
            flag = false;
        }
        //更新
        else
        {
            if(type == true)//idxと同じ
            {
                H = C[sub_i];
                idx += 1;
            }
            else if(type == false)//idxの一つ左
            {
                H = B[sub_i];
                idx -= 1;
            }
        }
    }

    return 0;
}
