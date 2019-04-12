#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    long long A[6] = {0};
    cin >> A[0];
    cin >> A[1];
    cin >> A[2];
    cin >> A[3];
    cin >> A[4];
    cin >> A[5];

    long long minval = A[1];
    for(int i = 2; i < 6; i++)
    {
        if(minval > A[i]) minval = A[i];
    }

    long long time;
    if(A[0] % minval == 0) time = A[0] / minval + 4;
    else time = A[0] / minval + 1 + 4;
    
    cout << time << endl;

    return 0;
}
