#include <iostream>
using namespace std;

int main()
{
    // 入力
    int a, b;
    cin >> a >> b;

    // bがaで割り切れるかどうかで分岐
    if(b % a == 0)
    {
        int c = a + b;
        cout << c;
    }
    else
    {
        int c = b - a;
        cout << c;
    }
}