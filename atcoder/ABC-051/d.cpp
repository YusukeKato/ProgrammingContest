#include <iostream>
#include <vector>
using namespace std;

int mtx[101][101] = {0};

class graph
{
    public:
    vector<int> a;
    vector<int> b;
    vector<int> c;
};

void calc(int start, int end)
{
    
}

int main()
{
    int N, M;
    cin >> N >> M;

    graph g;

    for(int i = 0; i < M; i++)
    {
        int A, B, C;
        cin >> A >> B >> C;
        g.a.push_back(A);
        g.b.push_back(B);
        g.c.push_back(C);
    }

    for(int i = 0; i < M; i++)
    {
        mtx[g.a[i]][g.b[i]] = g.c[i];
    }

    for(int i = 1; i <= M; i++)
    {
        for(int j = 1; j <= M; j++)
        {
            if(i < j)
            {
                calc(i, j);
            }
        }
    }

    return 0;
}
