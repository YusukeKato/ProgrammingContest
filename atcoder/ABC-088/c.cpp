#include <iostream>
using namespace std;

int main()
{
    int C[3][3];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> C[i][j];
        }
    }

    int a[3] = {0};
    int b[3] = {0};

    for(int i = 0; i < 3; i++)
    {
        b[i] = C[0][i] - 0;
    }

    for(int i = 1; i < 3; i++)
    {
        a[i] = C[i][i] - b[i];
    }

    bool flag = true;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(C[i][j] != (a[i] + b[j]))
            {
                flag = false;
            }
        }
    }

    if(flag == true) cout << "Yes" << endl;
    else if(flag == false) cout << "No" << endl;

    return 0;
}
