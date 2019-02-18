#include <iostream>
using namespace std;

int main()
{
    // 入力
    int N, K, X, Y;
    cin >> N >> K >> X >> Y;

    // 泊まる日数NがKより大きいかどうかで分岐
    int cost = 0;
    int a = N - K;
    if(a > 0)
    {
        cost += X * K;
        cost += Y * a;
    }
    else
    {
        cost += X * N;
    }

    // 出力
    cout << cost;
}