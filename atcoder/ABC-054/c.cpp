#include <iostream>

int dfs(int node, int N, bool *graph[], bool *visited)
{
    // 全て訪問済みかどうか
    bool all_visited = true;
    // 一つでも未訪問があれば false
    for(int i = 0; i < N; i++)
    {
        if(visited[i] == false)
        {
            all_visited = false;
        }
    }

    // 全て訪問出来たらパスの数を+1
    if(all_visited == true)
    {
        return 1;
    }

    // 0か1を返す
    int result = 0;
    for(int i = 0; i < N; i++)
    {
        // 辺がないなら次へ
        if(graph[node][i] == false) continue;
        // 訪問済みなら次へ
        if(visited[i] == true) continue;

        // それ以外なら訪問する
        visited[i] = true;
        // そのノードを訪問して再帰的にdfsを呼び出し
        result += dfs(i, N, graph, visited);

        // このノードを訪問しないパスへ
        visited[i] = false;
    }

    return result;
}

int main()
{
    int N, M;
    std::cin >> N >> M;

    // 隣接行列
    bool graph[N][N];

    // 隣接行列を初期化
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            graph[i][j] = false;
        }
    }

    // 入力
    for(int i = 0; i < M; i++)
    {
        int a, b;
        std::cin >> a >> b;
        graph[a-1][b-1] = true;
        graph[b-1][a-1] = true;
    }

    // 関数に渡すために隣接行列を変換
    bool *g[N];
    for(int i = 0; i < N; i++)
    {
        g[i] = graph[i];
    }

    // 訪問したかどうか記録する配列
    bool visited[N];
    for(int i = 0; i < N; i++)
    {
        visited[i] = false;
    }

    // visited[0]から開始：ノード１
    // dfs() を再帰的に呼び出して有効なルートをカウント
    visited[0] = true;
    std::cout << dfs(0, N, g, visited) << std::endl;

    return 0;
}