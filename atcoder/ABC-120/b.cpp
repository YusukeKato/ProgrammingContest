#include <iostream>
using namespace std;

int main()
{
    int A, B, K;
    cin >> A >> B >> K;

    int count = 0;
    int result = 0;

    int t = max(A, B);

    for(int i = t; i > 0; i--)
    {
        if(A % i == 0 and B % i == 0)
        {
            count += 1;
            if(count == K)
            {
                result = i;
                break;
            }
        }
    }    
    cout << result << endl;
    return 0;
}