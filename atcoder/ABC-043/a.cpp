#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int a = 0;
    for(int i = 1; i <= N; i++)
    {
        a += i;
    }
    cout << a;
}