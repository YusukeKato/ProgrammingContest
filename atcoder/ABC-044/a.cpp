#include <iostream>
using namespace std;

int main()
{
    int N, K, X, Y;
    cin >> N >> K >> X >> Y;

    int cost = 0;
    int a = N - K;
    if(a > 0)
    {
        cost += X * K;
        cost += Y * a;
    }
    else
    {
        cost += X * N;
    }
    cout << cost;
}