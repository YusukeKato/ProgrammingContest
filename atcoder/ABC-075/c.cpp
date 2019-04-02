#include <iostream>
using namespace std;

const int limit = 50;

int N, M;
int a[limit], b[limit];

bool graph[limit][limit];
bool visited[limit];

void dfs(int v)
{
    visited[v] = true;
    for(int v2 = 0; v2 < N; v2++)
    {
        if(graph[v][v2] == false) continue;
        if(visited[v2] == true) continue;
        dfs(v2);
    }
}

int main()
{
    cin >> N >> M;

    for(int i = 0; i < M; i++)
    {
        cin >> a[i] >> b[i];
        a[i]--, b[i]--;
        graph[a[i]][b[i]] = graph[b[i]][a[i]] = true;
    }

    int ans = 0;

    for(int i = 0; i < M; i++)
    {
        // この辺が橋かどうか判定
        graph[a[i]][b[i]] = graph[b[i]][a[i]] = false;

        for(int j = 0; j < N; j++) visited[j] = false;

        //0から始めて探索
        dfs(0);

        //visitedが一つでもfalseならば橋である
        bool bridge = false;
        for(int j = 0; j < N; j++)
        {
            if(visited[j] == false)
            {
                bridge = true;
            }
        }
        if(bridge == true)
        {
            ans += 1;
        }

        //戻す
        graph[a[i]][b[i]] = graph[b[i]][a[i]] = true;
    }

    cout << ans << endl;
}
