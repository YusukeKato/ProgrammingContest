#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    int k;
    int A[5];
    cin >> A[0];
    cin >> A[1];
    cin >> A[2];
    cin >> A[3];
    cin >> A[4];
    cin >> k;

    bool flag = true;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(i != j and abs(A[i] - A[j]) > k)
            {
                flag = false;
            }
        }
    }

    if(flag)
    {
        cout << "Yay!" << endl;
    }
    else
    {
        cout << ":(" << endl;
    }

    return 0;
}
