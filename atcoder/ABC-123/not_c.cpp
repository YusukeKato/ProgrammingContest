#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    long long N;
    long long A[6] = {0};
    long long B[6] = {0};
    cin >> B[0];//N
    cin >> A[1];
    cin >> A[2];
    cin >> A[3];
    cin >> A[4];
    cin >> A[5];

    N = B[0];

    long long time = 0;
    while(B[5] != N)
    {
        long long tmp[6] = {0};

        for(int i = 0; i < 5; i++)
        {
            if(B[i] >= A[i+1])
            {
                tmp[i+1] += A[i+1];
                tmp[i] -= A[i+1];
            }
            else if(B[i] > 0)
            {
                tmp[i+1] += B[i];
                tmp[i] -= B[i];
            }
        }

        for(int i = 0; i < 6; i++)
        {
            B[i] += tmp[i];
        }

        time++;

        /*
        cout << " B0:" << B[0];
        cout << " B1:" << B[1];
        cout << " B2:" << B[2];
        cout << " B3:" << B[3];
        cout << " B4:" << B[4];
        cout << " B5:" << B[5];
        cout << endl;
        cout << "===" << endl;
        */
    }

    cout << time << endl;

    return 0;
}
