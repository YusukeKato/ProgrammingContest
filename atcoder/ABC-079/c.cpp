#include <iostream>
#include <string>
#include <sstream>
#include <bitset>
#include <vector>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int A[4];
    for(int i = 0; i < 4; i++)
    {
        A[i] = s[i] - '0';
    }
    
    for(int i = 0; i < 1<<3; i++)
    {
        stringstream ss;
        ss << static_cast<bitset<3>>(i);
        string sss = ss.str();

        int ans = A[0];
        vector<string> v;
        ostringstream oss;
        oss << A[0];
        v.push_back(oss.str());
        for(int j = 1; j < 4; j++)
        {
            if(sss[j-1] == '0')
            {
                ans += A[j];
                v.push_back("+");
            }
            else if(sss[j-1] == '1')
            {
                ans -= A[j];
                v.push_back("-");
            }
            ostringstream oss;
            oss << A[j];
            v.push_back(oss.str());
        }

        if(ans == 7)
        {
            for(int i = 0; i < v.size(); i++)
            {
                cout << v[i];
            }
            cout << "=7" << endl;
            return 0;
        }
    }

    return 0;
}
