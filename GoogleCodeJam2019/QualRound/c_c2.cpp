#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
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
        int N;
        int L;
        cin >> N >> L;

        long long A[L];
        for(int j = 0; j < L; j++) cin >> A[j];

        vector<long long> v1;
        vector<long long> v2;
        for(int j = 0; j < L; j++)
        {
            for(int k = 0; N >= v[k]; k++)
            {
                if(A[j] % v[k] == 0)
                {
                    long long x = A[j] / v[k];
                    long long y = v[k];
                    v1.push_back(x);
                    v2.push_back(y);
                    break;
                }
            }
        }

        vector<long long> ans(L+1);
        for(int j = 0; j < L-1; j++)
        {
            if(v1[j] == v1[j+1] or v1[j] == v2[j+1]) ans[j] = v2[j];
            else if(v2[j] == v1[j+1] or v2[j] == v2[j+1]) ans[j] = v1[j];
        }

        if(v1[L-1] == v1[L-2] or v1[L-1] == v2[L-2])
        {
            ans[L-1] = v1[L-1];
            ans[L] = v2[L-1];
        }
        else if(v2[L-1] == v1[L-2] or v2[L-1] == v2[L-2])
        {
            ans[L-1] = v2[L-1];
            ans[L] = v1[L-1];
        }

        vector<long long> sub(L+1);
        for(int j = 0; j < sub.size(); j++)
        {
            sub[j] = ans[j];
        }
        sort(sub.begin(), sub.end());
        vector<long long> sub2;
        sub2.push_back(sub[0]);
        for(int j = 1; j < sub.size(); j++)
        {
            if(sub[j-1] != sub[j])
            {
                sub2.push_back(sub[j]);
            }
        }

        char C[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

        cout << "Case #" << i+1 << ": ";
        for(int j = 0; j < ans.size(); j++)
        {
            for(int k = 0; k < 26; k++)
            {
                if(ans[j] == sub2[k])
                {
                    cout << C[k];
                }
            }
        }
        cout << endl;
    }

    return 0;
}
