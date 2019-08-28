#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	// <<P,Y>,i>のように三つのデータを一つの配列で扱う
	vector<pair<pair<int, int>, int>> data(10);
	// データを入力
	data[0] = make_pair(make_pair(1, 1), 0);
	data[1] = make_pair(make_pair(2, 2), 1);
	data[2] = make_pair(make_pair(3, 3), 2);
	data[3] = make_pair(make_pair(1, 7), 3);
	data[4] = make_pair(make_pair(5, 6), 4);
	data[5] = make_pair(make_pair(1, 5), 5);
	data[6] = make_pair(make_pair(2, 1), 6);
	data[7] = make_pair(make_pair(1, 9), 7);
	data[8] = make_pair(make_pair(3, 4), 8);
	data[9] = make_pair(make_pair(1, 8), 9);
	// Xについてソート、Xが同値の中でYについてもソート
	sort(data.begin(), data.end());
	// ソートされているか確認
	for(auto d: data)
	{
		cout << d.first.first << " ";
		cout << d.first.second << " ";
		cout << d.second << endl;
	}
	return 0;
}
