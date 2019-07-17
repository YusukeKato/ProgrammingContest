#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    vector<long long> v;
    v.push_back(2);
    for(int i = 3; i <= 10000; i+=2)
    {
        long double isqrt = sqrt(i);
        bool flag = true;
        for(int j = 3; flag and j <= isqrt; j+=2)
        {
            if(i % j == 0) flag = false;
        }
        if(flag == true) v.push_back(i);
    }

    int T;
    cin >> T;

    for(int i = 0; i < T; i++)
    {
        long long N, L;
        cin >> N >> L;

        long long LL[L];
        for(int j = 0; j < L; j++) cin >> LL[j];

        vector<long long> v1(L);
        vector<long long> v2(L);

        for(int k = 0; k < L; k++)
        {
            for(int j = 0; LL[k]/2 >= v[j]; j++)
            {
                if(LL[0] % v[j] == 0)
                {
                    long long tmp1 = v[j];
                    long long tmp2 = LL[0] / v[j];
                    v1.push_back(tmp1);
                    v2.push_back(tmp2);
                }
            }
        }

        long long idx = 0;
        long long val = 0;
        vector<long long> ans(L+1);
        for(int k = 0; k < L; k++)
        {
            if((v1[k] == v1[k+1] and v2[k] == v2[k+1]) or
                (v1[k] == v2[k+1] and v2[k] == v1[k+1]))
            {
                idx = k;
                val = v1[k];
            }
        }
    }
}
