#include <iostream>
#include <string>
#include <vector>
#include <bitset>
#include <sstream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int n2 = 2*n - 2;

        for(int j = 0; j < (1<<n2); j++)
        {
            stringstream ss;
            ss << static_cast<bitset<64>>(j);
            string tmp = ss.str();

            vector<char> v(n2);
            vector<int> x(n2+1, 0);
            vector<int> y(n2+1, 0);
            for(int k = 63; k > 63 - n2; k--)
            {
                if(tmp[k] == '0')
                {
                    v[63-k] = 'E';
                    x[63-k+1] = x[63-k] + 1;
                    y[63-k+1] = y[63-k];
                }
                else if(tmp[k] == '1')
                {
                    v[63-k] = 'S';
                    x[63-k+1] = x[63-k];
                    y[63-k+1] = y[63-k] + 1;
                }
            }

            if(x[n2] > n-1 or y[n2] > n-1) continue;

            vector<int> x2(n2+1, 0);
            vector<int> y2(n2+1, 0);
            for(int k = 0; k < n2; k++)
            {
                if(s[k] == 'E')
                {
                    x2[k+1] = x2[k] + 1;
                    y2[k+1] = y2[k];
                }
                else if(s[k] == 'S')
                {
                    x2[k+1] = x2[k];
                    y2[k+1] = y2[k] + 1;
                }
            }

            bool flag = true;
            for(int k = 0; k < n2; k++)
            {
                if(x[k] == x2[k] and x[k+1] == x2[k+1] and
                    y[k] == y2[k] and y[k+1] == y2[k+1])
                {
                    flag = false;
                }
            }

            if(flag == true)
            {
                cout << "Case #" << i+1 << ": ";
                for(int k = 0; k < v.size(); k++)
                {
                    cout << v[k];
                }
                cout << endl;
                break;
            }
        }
    }

    return 0;
}
