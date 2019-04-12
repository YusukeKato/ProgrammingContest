#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    int A[5];
    cin >> A[0];
    cin >> A[1];
    cin >> A[2];
    cin >> A[3];
    cin >> A[4];

    int time = 999999;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            for(int k = 0; k < 5; k++)
            {
                for(int m = 0; m < 5; m++)
                {
                    for(int n = 0; n < 5; n++)
                    {
                        int sub = 0;
                        if(i!=j and i!=k and i!=m and i!=n and
                           j!=k and j!=m and j!=n and
                           k!=m and k!=n and
                           m!=n)
                        {
                            sub += A[i];
                            if(sub % 10 != 0)
                            {
                                sub /= 10;
                                sub += 1;
                                sub *= 10;
                            }
                            sub += A[j];
                            if(sub % 10 != 0)
                            {
                                sub /= 10;
                                sub += 1;
                                sub *= 10;
                            }
                            sub += A[k];
                            if(sub % 10 != 0)
                            {
                                sub /= 10;
                                sub += 1;
                                sub *= 10;
                            }
                            sub += A[m];
                            if(sub % 10 != 0)
                            {
                                sub /= 10;
                                sub += 1;
                                sub *= 10;
                            }
                            sub += A[n];

                            time = min(time, sub);
                        }//ifend
                    }
                }
            }
        }
    }

    cout << time << endl;

    return 0;
}
