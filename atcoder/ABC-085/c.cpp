#include <iostream>
using namespace std;

int main()
{
    int N, Y;
    cin >> N >> Y;

    int ans_a = -1;
    int ans_b = -1;
    int ans_c = -1;
    for(int a = 0; a <= N; a++)
    {
        for(int b = 0; b <= N; b++)
        {
            int c = N - a - b;
            if(c >= 0 and a+b+c == N and 10000*a+5000*b+1000*c == Y)
            {
                ans_a = a;
                ans_b = b;
                ans_c = c;
            }
        }
    }

    cout << ans_a << " " << ans_b << " " << ans_c << endl;

    return 0;
}
