#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 入力
    string s;
    cin >> s;

    // 前から順々に判定
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'B')
        {
            // まず、"B"の分、一個前にずらす
            for(int j = i; j < s.length()-1; j++)
            {
                s[j] = s[j+1];
            }
            s[s.length()-1] = '2'; // 削除の代わりに"2"を代入

            // 次に、"B"が先頭ではないなら、"B"の一個前を削除して、その分一個前にずらす
            if(i > 0)
            {
                for(int j = i; j < s.length(); j++)
                {
                    s[j-1] = s[j];
                }
            }
            s[s.length()-1] = '2';

            // また、先頭から判定
            i = -1;
        }

        // デバッグ
        //cout << s << endl;
    }

    // 出力する文字列を作成
    string result = "";
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] != '2') result += s[i];
    }

    cout << result;

    // デバッグ
    //cout << result.length();
}