#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;

	vector<int> A(N);
	for(int i = 0; i < N; i++) cin >> A[i];

	long long int sum = 0;
	for(int i = 0; i < N; i++) sum += A[i];

	// 重複なしの自動ソート
	set<long long int> c;

	// 約数を求める
	for(int i = 1; i*i <= sum; i++)
	{
		if(sum % i == 0)
		{
			c.insert(i);
			c.insert(sum / i);
		}
	}

	long long int ans = 1;
	
	// 整数列を操作して、最大公約数をxにできるかどうか
	for(long long int x : c)
	{
		long long int need; //操作回数
		vector<long long int> r(N);
		// 各要素を何回操作したらxの倍数になるか
		for(int i = 0; i < N; i++) r[i] = A[i] % x;
		// -1する側と+1する側を分けるためにソート
		sort(r.begin(), r.end());
		// プラスする側
		long long int b = 0;
		for(int i = 0; i < N; i++) b += x - r[i];
		// プラス側とマイナスする側の区切りを一つずつ確かめる
		long long int a = 0;
		need = 1e18;
		for(int i = 0; i < N; i++)
		{
			a += r[i];
			b -= x-r[i];
			need = min(need, max(a, b));
			cout << need << endl;
		}
		if(need <= K) ans = max(ans, x);
	}

	cout << ans << endl;

	return 0;
}
