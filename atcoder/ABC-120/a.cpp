#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    int count = 0;
    while(B >= A)
    {
        B -= A;
        count++;
        if(C <= count) break;
    }

    cout << count << endl;
}