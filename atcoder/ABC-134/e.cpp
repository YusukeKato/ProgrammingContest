#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<int> a(N);

	for(int i = 0; i < N; i++)
	{
		cin >> a[i];
	}

	//両端キュー、前からも値を入れることが可能
	//昇順に並べていく
	deque<int> d;

	for(int i = 0; i < N; i++)
	{
		//a[i]以上の値の中で一番小さい値のインデックスを返す
		int p = lower_bound(d.begin(), d.end(), a[i]) - d.begin();

		//a[i]以上の値が存在しないときはキューの一番最初に入れる（つまり別の色を塗る）
		if(p == 0)
		{
			d.push_front(a[i]);
		}
		//a[i]以上の値より一つ左隣り（インデックスが一つ小さい）値を書き換える
		//つまりa[i]より小さい値の中でで一番大きな値を書き換える
		//（同じ色で塗るということ）
		else
		{
			d[p-1] = a[i];
		}
	}

	//dの長さが色の数になっている
	//（別の色を塗るたびに先頭に挿入しているから）
	int ans = d.size();
	cout << ans << endl;

	return 0;
}
