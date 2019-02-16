# ProgrammingContest
プログラミングコンテストのコード

## 覚えておきたい問題

### ABC-044 B
[AtCoder](https://atcoder.jp/contests/abc044/tasks/abc044_b)
[ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/ABC-044/b.cpp)

アルファベットを文字コードとして扱うやつ。
長さ26の配列を用意してアルファベットの数をカウント。
前も何かしらの問題で使った。
他の解法もあるのだろうか。


## 時間がかかった問題

### ABC-042 B
[AtCoder](https://atcoder.jp/contests/abc042/tasks/abc042_b)
[ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/ABC-042/b.cpp)

文字列を辞書順でソートするだけの問題。
単純な問題だけど、そもそもソート自体が不慣れだった。
もっとスマートに解けるはず。
他の解法も確認したい。

調べたらこんな感じで文字列ソートできるらしい。

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

## 解説をみた問題

### ABC-051 C
[AtCoder](https://atcoder.jp/contests/abc051/tasks/abc051_c)
[ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/ABC-051/c.cpp)

条件を見落としてた（sx < tx, sy < ty）。
条件があるおかげでかなり制限されてるけど、
この条件がなかったらかなり面倒くさそうだと思った（主観）。
とはいいつつ、仮に条件がなくても経路探索の典型問題なんだろうなと思う。
典型問題でも解けるか不安。