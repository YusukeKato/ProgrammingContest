#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int N = s.size();

    long long ans = 0;

    for(int i = 0; i < (1 << N - 1); i++)
    {
        long long  now = s[0] - '0';
        long long sum = 0;
        for(int j = 1; j < N; j++)
        {
            if(i & (1 << j - 1))
            {
                sum += now;
                now = 0;
            }
            now *= 10;
            now += s[j] - '0';
        }
        ans += sum + now;
    }

    cout << ans << endl;

    return 0;
}
