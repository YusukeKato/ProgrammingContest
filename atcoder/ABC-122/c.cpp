#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;

    string S;
    cin >> S;

    int L[Q];
    int R[Q];

    for(int i = 0; i < Q; i++) cin >> L[i] >> R[i];

    int cnt_array[N] = {0};
    int cnt = 0;
    for(int i = 1; i < N; i++)
    {
        if(S[i-1] == 'A' and S[i] == 'C') cnt++;
        cnt_array[i] = cnt;
    }

    for(int i = 0; i < Q; i++)
    {
        int ans = cnt_array[R[i]-1] - cnt_array[L[i]-1];
        cout << ans << endl;
    }

    return 0;
}
