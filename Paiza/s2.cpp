#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, M, Q;
    cin >> N >> M >> Q;

    long long MM[N+1][N+1];
    for(int i = 0; i < N+1; i++)
    {
        for(int j = 0; j < N+1; j++)
        {
            MM[i][j] = 0;
        }
    }

    for(int i = 0; i < M; i++)
    {
        int a, b;
        long long f;
        cin >> a >> b >> f;
        MM[a][b] = f;
    }

    char op[Q];
    int q[Q];
    for(int i = 0; i < Q; i++)
    {
        cin >> op[i] >> q[i];
    }

    vector<int> v;
    for(int i = 0; i < Q; i++)
    {
        //opの処理
        if(op[i] == '+') v.push_back(q[i]);
        else if(op[i] == '-')
        {
            for(int j = 0; j < v.size(); j++)
            {
                if(v[j] == q[j])
                {
                    v.erase(v.begin() + j);
                }
            }
        }
        //友好度を調査
        long long point = 0;
        for(int j = 0; j < v.size(); j++)
        {
            int aa = v[j];            
            for(int k = 1; k < N+1; k++)
            {
                point = max(point, MM[aa][k]);
                point = max(point, MM[k][aa]);
            }
        }

        cout << point << endl;
    }

    return 0;
}
