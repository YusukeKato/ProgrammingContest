#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for(int i = 0; i < T; i++)
    {
        int N;
        cin >> N;
        string s;
        cin >> s;

        int N2 = N*2 - 2;

        vector<char> v;
        long long cnt = 0;
        long long x = 0;
        long long y = 0;
        long long x2 = 0;
        long long y2 = 0;

        while(cnt < N2)
        {
            bool flag = true;
            char c = s[cnt];

            if(s[cnt] == 'E') 
            {
                x += 1;
                v.push_back('S');
                y2 += 1;
            }
            else
            {
                y += 1;
                v.push_back('E');
                x2 += 1;
            }

            cnt++;

            while(flag and (x2 <= N-1 or y2 <= N-1) and cnt < N2)
            {
                if(s[cnt] == 'E') x += 1;
                else if(s[cnt] == 'S') y += 1;

                if(c != s[cnt]) flag = false;

                if(flag == false)
                {
                    if(s[cnt] == 'E') 
                    {
                        v.push_back('S');
                        y2 += 1;
                    }
                    else 
                    {
                        v.push_back('E');
                        x2 += 1;
                    }
                }
                else if(flag == true)
                {
                    if(x2 >= N-1)
                    {
                        v.push_back('S');
                        y2 += 1;
                    }
                    else if(y2 >= N-1)
                    {
                        v.push_back('E');
                        x2 += 1;
                    }
                    else if(x >= N-1)
                    {
                        v.push_back('S');
                        y2 += 1;
                    }
                    else if(y >= N-1)
                    {
                        v.push_back('E');
                        x2 += 1;
                    }
                    else
                    {
                        v.push_back(s[cnt]);
                        if(s[cnt] == 'E') x2 += 1;
                        else if(s[cnt] == 'S') y2 += 1;
                    }

                }

                cnt++;
            }
        }

        cout << "Case #" << i+1 << ": ";
        for(int j = 0; j < v.size(); j++)
        {
            cout << v[j];
        }
        cout << endl;
    }

    return 0;
}
