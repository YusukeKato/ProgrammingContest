#include <iostream>
using namespace std;

int main()
{
    int T,B,U,D,L,R;
    cin >> T >> B >> U >> D >> L >> R;

    int r[3][4];

    r[0][0] = L;
    r[0][1] = U;
    r[0][2] = R;
    r[0][3] = D;

    r[1][0] = T;
    r[1][1] = U;
    r[1][2] = B;
    r[1][3] = D;

    r[2][0] = T;
    r[2][1] = R;
    r[2][2] = B;
    r[2][3] = L;

    int N;
    cin >> N;

    int M[N];
    for(int i = 0; i < N; i++)
    {
        cin >> M[i];
    }

    int cost = 0;
    for(int i = 0; i < N-1; i++)
    {
        int sub_cost = 9999;
        for(int k = 0; k < 3; k++)
        {
            bool flag_a = false;
            bool flag_b = false;
            int a, b;
            for(int j = 0; j < 4; j++)
            {
                if(r[k][j] == M[i+1])//目的の目
                {
                    a = j;
                    flag_a = true;
                }
                else if(r[k][j] == M[i])//前の目
                {
                    b = j;
                    flag_b = true;
                }
                if(flag_a and flag_b)
                {
                    int c = abs(a-b);
                    if(c == 3) c = 1;
                    if(sub_cost > c)
                    {
                        sub_cost = c;
                    }
                }
            }
        }
        cost += sub_cost;
    }

    cout << cost << endl;

    return 0;
}
