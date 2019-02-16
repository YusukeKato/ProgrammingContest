#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> v;
    for(int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    int max = 0;
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] > max) max = v[i];
    }

    vector<int> vec2;
    for(int i = 0; i < v.size(); i++)
    {
        int tt = max % v[i];
        if(tt != 0)
        {
            vec2.push_back(tt);
        }
    }

    if(vec2.size() == 0)
    {
        int64_t min = 9999999999;
        for(int i = 0; i < v.size(); i++)
        {
            if(v[i] < min) min = v[i];
        }
        cout << min;
        return 0;
    }

    sort(vec2.begin(), vec2.end());

    int64_t res = vec2[0];
    for(int i = 0; i < vec2.size()-1; i++)
    {
        for(int j = 0; vec2[i] <= v[j]; j++)
        {
            int pp = vec2[i] % v[j];
            if(pp < res)
            {
                res = pp;
            }
        }
    }

    cout << res;
}