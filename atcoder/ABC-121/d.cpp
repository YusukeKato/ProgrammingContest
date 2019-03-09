#include <iostream>
#include <sstream>
#include <vector>
#include <bitset>
using namespace std;

long long int calc(long long int n)
{
    long long int ans = 0;
    if(n % 2 == 0)
    {
        long long int cnt = (long long int)(n / 2);
        if(cnt % 2 == 0)
        {
            ans = 0;
        }
        else if(cnt % 2 == 1)
        {
            ans = 1;
        }
        ans = ans ^ n;
    }
    else if(n % 2 == 1)
    {
        long long int cnt = (long long int)((n+1) / 2);
        if(cnt % 2 == 0)
        {
            ans = 0;
        } 
        else if(cnt % 2 == 1)
        {
            ans = 1;
        }
    }

    return ans;
}

int main()
{
    long long int A, B;
    int sum[42] = {0};
    cin >> A >> B;

    long long int ans = calc(A-1) ^ calc(B);

    cout << ans << endl;

    return 0;
}