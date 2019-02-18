#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 入力
    string s;
    cin >> s;

    // 'a' - 'a' = 0;
    // 'z' - 'a' = 25
    int al[26] = {0};

    // 各アルファベットをカウント
    for(int i = 0; i < s.length(); i++)
    {
        al[s[i] - 'a'] += 1;
    }

    // 数が奇数のアルファベットが一つでもあれば false
    bool flag = true;
    for(int i = 0; i < 26; i++)
    {
        if(al[i] % 2 != 0) flag = false;
    }

    // 出力
    if(flag == true) cout << "Yes";
    else cout << "No";
}