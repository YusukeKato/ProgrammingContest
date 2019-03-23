#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int N;
    string S;
    cin >> N;
    cin >> S;

    long long int mod = 1e9+7;
    vector<long long int> alpha(26, 1);

    for(int i = 0; i < S.size(); i++)
    {
        alpha[S[i] - 'a']++;
    }

    long long int cnt = 1;
    for(int i = 0; i < 26; i++)
    {
        cnt *= alpha[i];
        cnt %= mod;
    }

    long long int ans = (cnt - 1) % mod;
    cout << ans << endl;
    return 0;
}
