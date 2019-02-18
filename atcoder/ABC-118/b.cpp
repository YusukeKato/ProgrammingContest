#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 入力
    int N, M;
    cin >> N >> M;

    // 一列の数の入力を受け取りながら、配列に好きな食べ物をカウント
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

    // 全員が好きな食べ物をカウント
    int count = 0;
    for(int i = 0; i < M; i++)
    {
        if(array[i] == N) count += 1;
    }

    // 出力
    cout << count;
}