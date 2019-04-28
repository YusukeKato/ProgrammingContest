#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    long long N;
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        string s;
        cin >> s;

        long long p = atoi(s.c_str());
        p -= 1;
        ostringstream oss;
        oss << p;
        s = oss.str();

        vector<int> v;

        for(int k = 0; k < s.size(); k++)
        {
            if(s[k] == '4')
            {
                int idx = (s.size()-1) - k;
                v.push_back(idx);
            }
        }

        long long p2 = 1;
        for(int k = 0; k < v.size(); k++)
        {
            p2 += pow(10, v[k]);
        }

        p += 1;
        long long a = p - p2;
        long long b = p2;
        cout << "Case #" << i+1  << ": " << a << " " << b << endl;
    }

    return 0;
}
