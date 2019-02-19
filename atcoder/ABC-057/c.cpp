#include <iostream>
using namespace std;

int main()
{
    // 入力
    int64_t N;
    cin >> N;

    // 1から割っていてNを二つに分ける
    // 桁数の最小値を更新していく
    int64_t res = 99;
    for(int64_t a = 1; a <= N; a++)
    {
        if(N % a == 0)
        {
            int64_t b = N / a;
            int c = max(to_string(a).length(), to_string(b).length());
            if(c < res)
            {
                res = c;
            }
        }
        // A, B の桁数が同じか、A の方が大きくなったら終了（計算コスト削減）
        //if(to_string(a).length() >= to_string(b).length())
        if(to_string(a).length() >= to_string(N).length()/2+2)
        {
            //cout << "a: " << a << " b: " << b << endl;
            break;
        }
    }

    // 出力
    cout << res << endl;
}