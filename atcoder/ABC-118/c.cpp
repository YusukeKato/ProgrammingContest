#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 最大公約数を求める、ベクターで受け取る
int vgcd(vector<int> v)
{
    int ans = v[0];
    for(int i = 0; i < v.size(); i++)
    {
        ans = __gcd(ans, v[i]);
    }
    return ans;
}

int main()
{
    // 入力
    int N;
    cin >> N;

    // 入力をベクターに詰めていく
    vector<int> v;
    for(int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    // すべての最大公約数を計算
    int ans = vgcd(v);

    // 出力
    cout << ans;
}