# AtCoder で解いた問題と考察、または感想

## 目次
- [覚えておきたい問題](#oboeteokitai)
- [ABC-042](#ABC-042)
- [ABC-043](#ABC-043)
- [ABC-044](#ABC-044)
- [ABC-051](#ABC-051)
- [ABC-118](#ABC-118)

# <a href="#oboeteokitai">覚えておきたい問題</a>
- [ABC-042](#ABC-042) B: 文字列のソート
- [ABC-044](#ABC-044) B: アルファベットを文字コードとして扱う
- [ABC-118](#ABC-118) C: ユークリッドの互除法

<!------------------------------------------------------------------------------------------------------------------->
# <a href="#ABC-042">ABC-042</a>
---
- [問題（AtCoderへ）](https://atcoder.jp/contests/abc042/tasks/)
- [ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/ABC-042/)

### ABC-042:A
三つの数字が俳句「575」かどうか判定する問題。
私は5と7の数をカウントして解いてみた。
他の人の解答を見ると、単純に場合分けしててなるほどなと思った。
コードの読みやすさを重視でいこう。

### ABC-042:B
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

### ABC-043:A
1+2+......+N と足し合わせていく問題。
私は普通に足し合わせて解いた。
解説を読むと、N*(N+1)/2 でもよいと書いてあって、「あっ、ガウスだ」と思った。

### ABC-043:B
「0」と「1」と「バックスペース」の三つのキーでできたキーボードでエディタ編集を試みる問題。
とりあえず"B"かどうか判定して、一文字ずつずらしてみた。
他の解法も確認したい。


<!------------------------------------------------------------------------------------------------------------------->
# <a href="#ABC-044">ABC-044</a>
---
- [問題（AtCoderへ）](https://atcoder.jp/contests/abc044/tasks/)
- [ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/ABC-044/)

### ABC-044:A
ホテル代を求める問題。
N日泊まるけど、K日間はX円で、そのあとはY円のやつ。
小学生の算数の問題でよく見た気がする。
A問題の中でも好きな問題。

### ABC-044:B
アルファベットを文字コードとして扱うやつ。
長さ26の配列を用意してアルファベットの数をカウント。
この方法は結構使う気がする。
他の解法もあるのだろうか。


<!------------------------------------------------------------------------------------------------------------------->
# <a href="#ABC-051">ABC-051</a>
---
- [問題（AtCoderへ）](https://atcoder.jp/contests/abc051/tasks/)
- [ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/ABC-051/)

### ABC-051:C
条件を見落としてた（sx < tx, sy < ty）。
条件があるおかげでかなり制限されてるけど、
この条件がなかったらかなり面倒くさそうだと思った（主観）。
とはいいつつ、仮に条件がなくても経路探索の典型問題なんだろうなと思う。
典型問題でも解けるか不安。


<!------------------------------------------------------------------------------------------------------------------->
# <a href="#ABC-118">ABC-118</a>
---
- [問題（AtCoderへ）](https://atcoder.jp/contests/abc118/tasks/)
- [解説動画](https://www.youtube.com/watch?v=qBxvXX5hkAA)
- [ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/ABC-118/)

### ABC-118:A
AがBの約数かどうか判定する問題。
AでBが割り切れるかどうかで条件分岐。

### ABC-118:B
アンケートで全員が「好き」と答えたものの合計を答える問題。
私は長さMの配列を作ってカウントした。

### ABC-118:C
解けなかったから解説を読んだ。
最大公約数を使うという発想が出てこない。
割り算したときの余りを使って解こうとしたけどよく分からなくなってしまった。
解説の動画を見てなんとなく理解した。
ユークリッドの互除法に近いことはしてたみたい。
でも圧倒的にstd::gcd()使った方が簡潔で分かりやすい。