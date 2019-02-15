#include <iostream>
#include <string>
#include <vector>
using namespace std;

void sortString(string* s, int j, int L)
{
    string s1 = s[j];
    string s2 = s[j+1];
    for(int k = 0; k < L; k++)
    {
        if(s1[k] > s2[k])
        {
            s[j] = s2;
            s[j+1] = s1;
            break;
        }
        // ここが重要、交換する必要がないと分かった時点で終了
        else if(s1[k] < s2[k])
        {
            break;
        }
    }
}

int main()
{
    // 入力
    int N, L;
    cin >> N >> L;
    string s[N];
    for(int i = 0; i < N; i++)
    {
        cin >> s[i];
    }

    // 文字列をソート
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N-1; j++)
        {
            sortString(s, j, L);
        }
    }

    // 答えの文字列を作成
    string result = "";
    for(int i = 0; i < N; i++)
    {
        result += s[i];
    }

    cout << result;
}