#include <iostream>
using namespace std;

int main()
{
    // 入力
    int a[3];
    for(int i = 0; i < 3; i++) cin >> a[i];

    // 5と7の数をカウント
    int count_5 = 0;
    int count_7 = 0;
    for(int i = 0; i < 3; i++)
    {
        if(a[i] == 5) count_5++;
        else if(a[i] == 7) count_7++;
    }

    // 575ならYES
    if(count_5 == 2 && count_7 == 1) cout << "YES";
    else cout << "NO";
}