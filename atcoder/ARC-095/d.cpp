#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<long long> v(N);
    for(int i = 0; i < N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    long long ans = 999999999;
    int idx = -1;
    for(int i = 0; i < N-1; i++)
    {
        long long nv = abs((long long)v[N-1] - 2*((long long)v[i]));
        if(ans > nv)
        {
            ans = nv;
            idx = i;
        }
    }

    cout << v[N-1] << " " << v[idx] << endl;

    return 0;
}
