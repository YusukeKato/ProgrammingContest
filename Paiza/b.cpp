#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        int e = 0;
        int o = 0;
        for(int j = 0; j < 15; j++)
        {
            //偶数桁
            if(j % 2 == 0)
            {
                int tmp = s[j] - '0';
                tmp *= 2;
                if(tmp >= 10)
                {
                    ostringstream oss;
                    oss << tmp;
                    string tmp_s = oss.str();
                    e += (tmp_s[0] - '0');
                    e += (tmp_s[1] - '0');
                }
                else
                {
                    e += tmp;
                }
            }
            //奇数桁
            else
            {
                o += s[j] - '0';
            }
        }

        int sum = e + o;
        if(sum % 10 == 0) cout << '0' << endl;
        else
        {
            int sum2 = sum;
            sum2 /= 10;
            sum2 += 1;
            sum2 *= 10;
            cout << sum2 - sum << endl;
        }
    }

    return 0;
}
