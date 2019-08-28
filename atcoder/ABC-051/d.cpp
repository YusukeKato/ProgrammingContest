#include <iostream>
using namespace std;

int main()
{
	const int INF = 1<<29;
	int N, M;
	cin >> N >> M;

	int a[1001] = {0};
	int b[1001] = {0};
	int c[1001] = {0};
	int dist[101][101] = {0};

	//ワーシャルフロイド法の初期化
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			dist[i][j] = INF;
		}
		dist[i][i] = 0; //自分への距離はゼロ
	}

	for(int i = 0; i < M; i++)
	{
		cin >> a[i] >> b[i] >> c[i];
		a[i]--; b[i]--; //インデックスのベースを１→０
		dist[a[i]][b[i]] = c[i];
		dist[b[i]][a[i]] = c[i];
	}

	//ワーシャルフロイド法
	for(int k = 0; k < N; k++)
	{
		for(int i = 0; i < N; i++)
		{
			for(int j = 0; j < N; j++)
			{
				dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
			}
		}
	}

	//この時点でdistには各頂点間の最短経路が入ってる

	//a[i]→b[i]間の距離が更新されている場合は、迂回路のほうが最短経路であるということ
	//つまりそのa[i]→b[i]は、いかなる経路においても最短経路として使われない経路である
	//(a[i]→b[i]を移動したいとき迂回経路のほうが最短経路となっているということ)
	int cnt = 0;
	for(int i = 0; i < M; i++)
	{
		if(c[i] > dist[a[i]][b[i]]) cnt++;
	}

	cout << cnt << endl;

	return 0;
}
