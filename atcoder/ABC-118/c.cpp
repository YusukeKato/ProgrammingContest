#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int vgcd(vector<int> v)
{
    int ans = v[0];
    for(int i = 0; i < v.size(); i++)
    {
        ans = __gcd(ans, v[i]);
    }
    return ans;
}

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

    int ans = vgcd(v);
    cout << ans;
}