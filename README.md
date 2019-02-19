# AtCoder で解いた問題と感想

## 目次
- [覚えておきたい問題](#oboeteokitai)
- [ABC-042](#ABC-042)
- [ABC-043](#ABC-043)
- [ABC-044](#ABC-044)
- [ABC-051](#ABC-051)
- [ABC-054](#ABC-054)
- [ABC-057](#ABC-057)
- [ABC-106](#ABC-106)
- [ABC-118](#ABC-118)

# <a href="#oboeteokitai">覚えておきたい問題</a>
- [ABC-042](#ABC-042) B: 文字列のソート [Iroha Loves Strings]
- [ABC-044](#ABC-044) B: アルファベットと文字コード [Beautiful Strings]
- [ABC-054](#ABC-054) C: 無向グラフ、深さ優先探索（DFS）[One-Stroke Path]
- [ABC-106](#ABC-106) D: 二次元配列の累積和 [AtCoder Express2]
- [ABC-118](#ABC-118) C: ユークリッドの互除法 [Monster Batle Royale]

<!------------------------------------------------------------------------------------------------------------------->
# <a href="#ABC-042">ABC-042</a>
---
- [問題（AtCoderへ）](https://atcoder.jp/contests/abc042/tasks/)
- [ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/ABC-042/)

### ABC-042:A Iroha and Haiku
三つの数字が俳句「575」かどうか判定する問題。
私は5と7の数をカウントして解いてみた。
他の人の解答を見ると、単純に場合分けしててなるほどなと思った。
コードの読みやすさを重視でいこう。

### ABC-042:B Iroha Loves Strings
文字列を辞書順でソートするだけの問題。
単純な問題だけど、そもそもソート自体が不慣れだった。
もっとスマートに解けるはず。
他の解法も確認したい。

ということで調べたらこんな感じで文字列ソートできるらしい。

```
vector<string> s;
s.push_back(s1);
s.push_back(s2);

// 昇順ソート
std::sort(s.begin(), s.end());

// 降順ソート
std::sort(s.gegin(), s.end(), std::greater<int>());
```
参考：http://7ujm.net/stl/sort.html


<!------------------------------------------------------------------------------------------------------------------->
# <a href="#ABC-043">ABC-043</a>
---
- [問題（AtCoderへ）](https://atcoder.jp/contests/abc043/tasks/)
- [ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/ABC-043/)

### ABC-043:A Children and Candies
1+2+......+N と足し合わせていく問題。
私は普通に足し合わせて解いた。
解説を読むと、N*(N+1)/2 でもよいと書いてあって、「あっ、ガウスだ」と思った。

### ABC-043:B Unhappy Hacking
「0」と「1」と「バックスペース」の三つのキーでできたキーボードでエディタ編集を試みる問題。
とりあえず"B"かどうか判定して、一文字ずつずらしてみた。
他の解法も確認したい。


<!------------------------------------------------------------------------------------------------------------------->
# <a href="#ABC-044">ABC-044</a>
---
- [問題（AtCoderへ）](https://atcoder.jp/contests/abc044/tasks/)
- [ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/ABC-044/)

### ABC-044:A Tak and Hotels
ホテル代を求める問題。
N日泊まるけど、K日間はX円で、そのあとはY円のやつ。
小学生の算数の問題でよく見た気がする。
A問題の中でも好きな問題。

### ABC-044:B Beautiful Strings
アルファベットを文字コードとして扱うやつ。
長さ26の配列を用意してアルファベットの数をカウント。
この方法は結構使う気がする。
他の解法もあるのだろうか。


<!------------------------------------------------------------------------------------------------------------------->
# <a href="#ABC-051">ABC-051</a>
---
- [問題（AtCoderへ）](https://atcoder.jp/contests/abc051/tasks/)
- [ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/ABC-051/)

### ABC-051:C Back and Forth
条件を見落としてた（sx < tx, sy < ty）。
条件があるおかげでかなり制限されてるけど、
この条件がなかったらかなり面倒くさそうだと思った（主観）。
とはいいつつ、仮に条件がなくても経路探索の典型問題なんだろうなと思う。
典型問題でも解けるか不安。


<!------------------------------------------------------------------------------------------------------------------->
# <a href="#ABC-054">ABC-054</a>
---
- [問題（AtCoderへ）](https://atcoder.jp/contests/abc054/tasks/)
- [ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/ABC-054/)

### ABC-054:C One-Stroke Path
解説を読んだ。グラフを扱う問題もまだまだ不慣れ。
隣接行列と深さ優先探索をなんとなく理解した。
再帰関数のイメージがまだはっきりとしない。
でもかなり強力だなと思う。

あと、本質ではないけど、
graph配列をグローバルで宣言したくないから
main関数内で二次元配列（隣接行列）を宣言して関数に渡した。

こんな感じ。

```
func(bool *g[]);

int main()
{
    bool graph[N][N];
    bool *g[N];
    for(int i = 0; i < N; i++)
    {
        g[i] = graph[i];
    }

    func(g);
}
```

<!------------------------------------------------------------------------------------------------------------------->
# <a href="#ABC-057">ABC-057</a>
---
- [問題（AtCoderへ）](https://atcoder.jp/contests/abc057/tasks/)
- [ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/ABC-057/)

### ABC-057:C Digits in Multiplication
整数Nが与えられて、N = AB の A と B を求める。
このときの A, B の桁数が大きい方を返す関数 F(A,B) において最小値を求める問題。
1 <= N <= 10^10 だから計算コストを考慮する必要がある。
10^5 × 10^5 = 10^10 から、最大で 10^5 まで計算すればいい。
よく分からない WA が出て困ったけど、いろいろやってたら AC した。

```
std::to_string(num).length();
```

これで簡単に数値の桁数が出せることを学んだ。

参考：https://qiita.com/EqualL2/items/168e083caa5f07a1105b

<!------------------------------------------------------------------------------------------------------------------->
# <a href="#ABC-106">ABC-106</a>
---
- [問題（AtCoderへ）](https://atcoder.jp/contests/abc106/tasks/)
- [ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/ABC-106/)

### ABC-106:D AtCoder Express 2
コンテスト時に解けなくて解説動画を見た問題。また解いてみた。
列車が走る区画（Li, Ri）を二次元配列に突っ込んで、
クエリ（pi, qi）の区画の中に入っている列車の数を答える問題。
何も考えなしにやると、TLE するから工夫が必要。
二次元配列の累積和を求めると計算コストがかなり減らせる。
解説動画を見てこの累積和を知ったとき感動した。
今まで解いた問題ではトップクラスに好き。

<!------------------------------------------------------------------------------------------------------------------->
# <a href="#ABC-118">ABC-118</a>
---
- [問題（AtCoderへ）](https://atcoder.jp/contests/abc118/tasks/)
- [解説動画](https://www.youtube.com/watch?v=qBxvXX5hkAA)
- [ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/ABC-118/)

### ABC-118:A B+/-A
AがBの約数かどうか判定する問題。
AでBが割り切れるかどうかで条件分岐。

### ABC-118:B Foods Loved by Everyone
アンケートで全員が「好き」と答えたものの合計を答える問題。
私は長さMの配列を作ってカウントした。

### ABC-118:C Monster Batle Royale
解けなかったから解説を読んだ。
最大公約数を使うという発想が出てこない。
割り算したときの余りを使って解こうとしたけどよく分からなくなってしまった。
解説の動画を見てなんとなく理解した。
ユークリッドの互除法に近いことはしてたみたい。
でも圧倒的にstd::gcd()使った方が簡潔で分かりやすい。