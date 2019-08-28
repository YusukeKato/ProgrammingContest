#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	string S;
	cin >> S;

	// ( mod 13 )
	const int N = 13;

	//dp配列
	vector<int64_t> dp(N);
	// 0%13=0なので余り0の個数を1にする
	dp[0] = 1;

	//答えはこれで割った余りを出力
	int64_t mod = 1e9+7;

	//何の位かを表す（1の位、10の位、100の位、......）
	int64_t mul = 1;

	//文字列を一桁ずつ見ていく（1の位から見ていくよ）
	for(int i = S.size()-1; i >= 0; i--)
	{
		//更新したdp配列
		vector<int64_t> nextDP(N);

		char c = S[i];

		if(c == '?')
		{
			//'?'が0-9の場合をそれぞれ考えていく
			for(int k = 0; k < 10; k++)
			{
				//各余りの個数を更新
				for(int j = 0; j < N; j++)
				{
					//(k * mul + j)は、一つ前のdp配列のインデックスが
					//次のdp配列のインデックスがいくつがずれるか
					//つまり、余りの個数が移動する
					nextDP[(k * mul + j) % 13] += dp[j];
					nextDP[(k * mul + j) % 13] %= mod;
				}
			}
		}
		else
		{
			//文字cをintに変換
			int k = (int)(c - '0');

			//各余りの個数を更新
			for(int j = 0; j < N; j++)
			{
				//(k * mul + j)は、一つ前のdp配列のインデックスが
				//次のdp配列のインデックスがいくつがずれるか
				//つまり、余りの個数が移動する
				nextDP[(k * mul + j) % 13] += dp[j];
				nextDP[(k * mul + j) % 13] %= mod;
			}
		}

		//dp配列を更新
		dp = nextDP;

		//次の位に更新
		mul *= 10;
		//ここで余りをとっても結果は変わらない
		mul %= N;
	}

	//余り5の個数を出力
	cout << dp[5] << endl;

	return 0;
}
