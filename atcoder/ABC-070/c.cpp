#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

unsigned long long lcm(unsigned long long a, unsigned long long b)
{
    unsigned long long g = __gcd(a, b);
    return (a / g * b);
}

int main()
{
    unsigned long long N;
    cin >> N;

    vector<unsigned long long> v(N);
    for(int i = 0; i < N; i++) cin >> v[i];

    unsigned long long ans = 1;
    for(int i = 0; i < N; i++)
    {
        ans = lcm(ans, v[i]);
    }

    cout << ans << endl;

    return 0;
}
