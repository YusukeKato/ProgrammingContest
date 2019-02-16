#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if(b % a == 0)
    {
        int c = a + b;
        cout << c;
    }
    else
    {
        int c = b - a;
        cout << c;
    }
}