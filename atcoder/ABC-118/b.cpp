#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int array[M] = {0};
    for(int i = 0; i < N; i++)
    {
        int K;
        cin >> K;
        for(int j = 0; j < K; j++)
        {
            int a;
            cin >> a;
            array[a-1] += 1;
        }
    }

    int count = 0;
    for(int i = 0; i < M; i++)
    {
        if(array[i] == N) count += 1;
    }

    cout << count;
}