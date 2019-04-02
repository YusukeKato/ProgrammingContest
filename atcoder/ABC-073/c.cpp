#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<long long> v(N, 0);

    for(int i = 0; i < N; i++)
    {
        long long t;
        cin >> t;
        v[i] = t;
    }
    
    sort(v.begin(), v.end());

    int cnt = 0;
    for(int i = 0; i < v.size()-1; i++)
    {
        if(v[i] == v[i+1])
        {
            cnt += 2;
            i++;
        }
    }

    cout << N-cnt << endl;

    return 0;
}
