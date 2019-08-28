#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	
	// ある日までにやらなければならないアルバイトのグループとして格納していく
	// 最大でM日まで
	vector<vector<int>> jobs(M);

	for(int i = 0; i < N; i++)
	{
		int A, B;
		cin >> A >> B;

		// AがMを超えている場合はそのアルバイトは絶対にできない
		if(A > M) continue;
		
		// M-A日までにやらなければならないアルバイト
		jobs[M - A].push_back(B);
	}

	// 優先度付きキュー
	// 追加と最大値を取り出す機能を持っている
	priority_queue<int> q;

	long long int ans = 0;
	// 後ろから見ていく（この日までにやらなければいけないアルバイトグループを見ていく）
	// 例：M-1日目には、一日後に報酬がもらえるアルバイトの中で一番報酬が大きいアルバイトを選ぶ
	// また、一日後に報酬がもらえるアルバイトはM-2日目にも行えるのでそのままqueueに残しておく
	for(int i = M-1; i >= 0; i--)
	{
		// jobsのi番目の報酬の配列をpriority_queueに突っ込んでいく
		for(int b : jobs[i])
		{
			q.push(b);
		}
		if(!q.empty())
		{
			// qの最大値を取り出す
			// 現在行うことができるアルバイトの中で報酬が最大のものを選択
			ans += q.top();
			// 取り出した値を削除、一度選択したアルバイトは二度と請けられない
			q.pop();
		}
	}

	cout << ans << endl;

	return 0;
}
