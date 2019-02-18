#include <iostream>
using namespace std;

int main()
{
    // 入力
    int N;
    cin >> N;

    // 1からNまで足し合わせ
    int a = 0;
    for(int i = 1; i <= N; i++)
    {
        a += i;
    }

    // 出力
    cout << a;
}