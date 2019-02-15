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
            //cout << " s1: " << s1[k] << " s2: " << s2[k] << " ";
            s[j] = s2;
            s[j+1] = s1;
            break;
        }
        else if(s1[k] < s2[k])
        {
            break;
        }
    }
}

int main()
{
    int N, L;
    cin >> N >> L;
    string s[N];
    for(int i = 0; i < N; i++)
    {
        cin >> s[i];
    }

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N-1; j++)
        {
            sortString(s, j, L);
            //cout << " i:" << i << " j:" << j << " ";
            //for(int t = 0; t < N; t++) cout << s[t];
        }
    }

    string result = "";
    for(int i = 0; i < N; i++)
    {
        result += s[i];
    }

    cout << result;
}