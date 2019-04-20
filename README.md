# AtCoder で解いた問題と感想

## 目次
- [覚えておきたい問題](#oboeteokitai)

- ABC
    - [ABC-042](#ABC-042)
    - [ABC-043](#ABC-043)
    - [ABC-044](#ABC-044)
    - [ABC-045](#ABC-045)
    - [ABC-051](#ABC-051)
    - [ABC-054](#ABC-054)
    - [ABC-057](#ABC-057)
    - [ABC-061](#ABC-061)
    - [ABC-064](#ABC-064)
    - [ABC-070](#ABC-070)
    - [ABC-073](#ABC-073)
    - [ABC-075](#ABC-075)
    - [ABC-076](#ABC-076)
    - [ABC-079](#ABC-079)
    - [ABC-080](#ABC-080)
    - [ABC-084](#ABC-084)
    - [ABC-085](#ABC-085)
    - [ABC-088](#ABC-088)
    - [ABC-089](#ABC-089)
    - [ABC-096](#ABC-096)
    - [ABC-099](#ABC-099)
    - [ABC-100](#ABC-100)
    - [ABC-103](#ABC-103)
    - [ABC-104](#ABC-104)
    - [ABC-106](#ABC-106)
    - [ABC-108](#ABC-108)
    - [ABC-118](#ABC-118)
    - [ABC-120](#ABC-120)
    - [ABC-121](#ABC-121)
    - [ABC-122](#ABC-122)
    - [ABC-124](#ABC-124)

- ARC
    - [ARC-095](#ARC-095)

- AGC
    - [AGC-031](#AGC-031)
    - [AGC-032](#AGC-032)

- その他
    - [MUJIN2018](#MUJIN2018)
    - [EXAWIZARDS2019](#EXAWIZARDS2019)
	- [Tenka1_2019](#Tenka1_2019)

- [参考](#sankou)

# <a href="#oboeteokitai">覚えておきたい問題</a>
- [ABC-042](#ABC-042) B: 文字列のソート [Iroha Loves Strings]
- [ABC-044](#ABC-044) B: アルファベットと文字コード [Beautiful Strings]
- [ABC-054](#ABC-054) C: 無向グラフ、深さ優先探索（DFS）[One-Stroke Path]
- [ABC-106](#ABC-106) D: 二次元配列の累積和 [AtCoder Express2]
- [ABC-118](#ABC-118) C: ユークリッドの互除法 [Monster Batle Royale]
- [ABC-122](#ABC-122) C: 累積和の典型問題 [GeT AC]
- [ABC-075](#ABC-075) C: グラフ、DFSの再帰関数
- [ABC-079](#ABC-079) C: ビットのシフトを使った全探索(ABC-045:Cも)
- [ABC-080](#ABC-080) C: ビットのシフトを使った全探索(さらに)
- [Tenka1_2019](#Tenka1_2019) C: 累積和

# <a href="#oboeteokitai">また考えたい問題</a>
- [ABC-045](#ABC-045) C: 実装が難しい [Many Formulas]
- [ABC-104](#ABC-104) C: 解き方難しい [All Green]

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
# <a href="#ABC-045">ABC-045</a>
---
- [問題（AtCoderへ）](https://atcoder.jp/contests/abc045/tasks/)
- [ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/ABC-045/)

### ABC-045:A 台形 / Trapezoids
台形の面積を求めるだけ。

### ABC-045:A 3人でカードゲームイージー / Card Game for Three (ABC Edit)
三人のプレイヤーに'a''b''c'のいずれかが書かれたカードが何枚か配られて、
ターンはプレイヤーAから始まる。
ターンのプレイヤーは先頭のカードを捨て、
そのカードに書かれた文字のプレイヤーにターンが移る。
自分にターンが回ってきた時点でカードがなくなっていたら勝ち。

実装が大変だったけど、
問題自体は簡単。

### ABC-045:C たくさんの数式 / Many Formulas
'1'から'9'の整数からなる数列が与えられる。
数字と数字の間に'+'を入れられる（いくつでも）。
隣り合ってはいけない。

すべての場合の数式において合計値を求める。

解き方は分かるんだけど、
実装方法が分からなかった。

他の人の解答をみて'<<'を使ったビットのシフトとか、
単項演算子'&'による演算方法を知った。

だけどまだよく分からない。

また今度考えよう。

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
# <a href="#ABC-061">ABC-061</a>
---
- [問題（AtCoderへ）](https://atcoder.jp/contests/abc061/tasks/)
- [ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/ABC-061/)

### ABC-061:C Big Array
i番目にai（整数）をbi（個数）を挿入した数列においてK番目に小さい値を求める問題。
ソートして個数をカウントするだけの問題なのになぜかWAした。

intがオーバーフローしてたのかも（WAになるのか？）。

初めて、vectorでpairを使ってみた。便利。make_pairの使い方をもうちょっと調べる。


<!------------------------------------------------------------------------------------------------------------------->
# <a href="#ABC-064">ABC-064</a>
---
- [問題（AtCoderへ）](https://atcoder.jp/contests/abc064/tasks/)
- [ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/ABC-064/)

### ABC-064:C Colorful Leaderboard
レートが与えられるから色の種類の最小と最大を求める問題。

正直、何を意図した問題か分からない。
レート3200以上の人をどう処理するかがちょっと迷うところ。
3200の人しかいない場合を場合分けする必要がある。

<!------------------------------------------------------------------------------------------------------------------->
# <a href="#ABC-070">ABC-070</a>
---
- [問題（AtCoderへ）](https://atcoder.jp/contests/abc070/tasks/)
- [ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/ABC-070/)

### ABC-070:C Multiple Clocks
一周する速さが異なる時計が同時に針が真上を向くまでの時間を求める問題。
最大公倍数を求めればよい。

解説ではTLEに気をつける必要があるみたいに書かれてたけど、
私としては10^18という値をどうしようかという問題の方が重要だった。

unsigned long long を使えばいいんだけど、
最小公倍数を求めるときに 10^18 * 10^18 の計算をするとオーバーフローして
だめだった。

```
a * b / g
```

をしたときの a * b でオーバーフローしててどうしようかなって思ってたら、
解説で以下のようになっててなるほどってなった。

```
a / g * b
```

<!------------------------------------------------------------------------------------------------------------------->
# <a href="#ABC-073">ABC-073</a>
---
- [問題（AtCoderへ）](https://atcoder.jp/contests/abc073/tasks/)
- [ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/ABC-073/)

### ABC-073:C Write and Erase
N個の数字が与えられて、
同じ数字が二つあれば削除していく。
残った数字は何個あるかという問題。

問題は簡単だし、解き方も簡単。
だけど制約として数字が10^9あるから
ちょっと工夫しなきゃいけない。

ちょっと時間かかったけど解けた。

<!------------------------------------------------------------------------------------------------------------------->
# <a href="#ABC-075">ABC-075</a>
---
- [問題（AtCoderへ）](https://atcoder.jp/contests/abc075/tasks/)
- [ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/ABC-075/)

### ABC-075:C Bridge
グラフの辺が橋かどうかを判定する問題。
橋とはその辺がなくなったら非連結になる辺。

実装方法が分からないから解説を読んだ。

グラフ問題の再帰関数は感動する。
こんなにきれいな関数もなかなかない気がする。
<!------------------------------------------------------------------------------------------------------------------->
# <a href="#ABC-076">ABC-076</a>
---
- [問題（AtCoderへ）](https://atcoder.jp/contests/abc076/tasks/)
- [ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/ABC-076/)

### ABC-076:C Dubious Document 2
自力ACできた。うれしい。

結構すんなり解けたから簡単だったのかもしれない。
（自分としては難しい問題だと思ったけど。）

'?'を含んだ文字列Sの中に、部分文字列Tを入れられる可能性がある場所を
探して入れる。それをすべてvectorに突っ込んでsortして、
一番若い文字列（辞書順で最小）を出力する。

'?'はワイルドカードみたいに何の文字にもなれる。

考えることは二つ（？）

(1) 部分文字列Tが含む文字と文字列Sが含む文字が一致するかどうか、
そのときその一致する文字の前後が一致するか、または'?'かを判定する。

(2) 部分文字列Tがそのまま入れる長さの'?'が続く場所があるか探す。

そして、余った'?'は全て'a'に置換する。辞書順最小なので。

<!------------------------------------------------------------------------------------------------------------------->
# <a href="#ABC-079">ABC-079</a>
---
- [問題（AtCoderへ）](https://atcoder.jp/contests/abc079/tasks/)
- [ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/ABC-079/)

### ABC-079:C Train Ticket
解くこと自体は簡単。
実装がちょっと大変。
if文8個書けばいいわけだけど、
ビットのシフトを使った方がちゃんとしてると思う。

<!------------------------------------------------------------------------------------------------------------------->
# <a href="#ABC-080">ABC-080</a>
---
- [問題（AtCoderへ）](https://atcoder.jp/contests/abc080/tasks/)
- [ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/ABC-080/)

### ABC-080:C Shopping Street
ビットシフトを使う問題。
問題を読み解くのに時間がかかった。
だからここで説明はしない。

勉強になったことが二つ。

まず、初期値はありったけ大きい値をいれてもいい
（または小さい値）。

```
(1) ans = -999999999;
(2) ans = -(1<<30);
```

はじめは(1)にしてたんだけど、
これだとテストケース一つだけWAになる。
(2)にしたらACだった。

ふたつめはこの書き方。

```
for(int i = 0; i < 1<<10; i++)
{
    for(int j = 0; j < 10; j++)
    {
        if(i>>j&1)
        {
            //処理
        }
    }
}
```

これで一ビットずつ判定ができる。

<!------------------------------------------------------------------------------------------------------------------->
# <a href="#ABC-084">ABC-084</a>
---
- [問題（AtCoderへ）](https://atcoder.jp/contests/abc084/tasks/)
- [ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/ABC-084/)

### ABC-084:C Special Trains
N個の駅、i から i+1 の駅に時間Ciで到着、
各駅では時刻Siから運行を開始してFi秒ごとに電車が出る。

各駅iから出発して駅Nまで行くのにかかる秒数を答える問題。

Nが小さいからシミュレーションで十分解ける問題だった。

<!------------------------------------------------------------------------------------------------------------------->
# <a href="#ABC-085">ABC-085</a>
---
- [問題（AtCoderへ）](https://atcoder.jp/contests/abc085/tasks/)
- [ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/ABC-085/)

### ABC-085:C Otoshidama 
けんちょんさんの記事でみた問題。

だから問題なく解けてしまった。

処理時間を削減するためのちょっとした工夫が思いつけるかどうか。

<!------------------------------------------------------------------------------------------------------------------->
# <a href="#ABC-088">ABC-088</a>
---
- [問題（AtCoderへ）](https://atcoder.jp/contests/abc088/tasks/)
- [ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/ABC-088/)

### ABC-088:C Takahashi's Information 
解説を読んだら、なるほどって感じの問題だった。

なぜか解けない。

<!------------------------------------------------------------------------------------------------------------------->
# <a href="#ABC-089">ABC-089</a>
---
- [問題（AtCoderへ）](https://atcoder.jp/contests/abc089/tasks/)
- [ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/ABC-089/)

### ABC-089:C March 
'M''A''R''C''H'をそれぞれ数えて、
全通り（10通り）全て数えて合計したものが答え。

<!------------------------------------------------------------------------------------------------------------------->
# <a href="#ABC-096">ABC-096</a>
---
- [問題（AtCoderへ）](https://atcoder.jp/contests/abc096/tasks/)
- [ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/ABC-096/)

### ABC-096:C Grid Repainting2 
'#'が二つ続くマスがあるかどうか判定するだけの問題。

<!------------------------------------------------------------------------------------------------------------------->
# <a href="#ABC-099">ABC-099</a>
---
- [問題（AtCoderへ）](https://atcoder.jp/contests/abc099/tasks/)
- [ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/ABC-099/)

### ABC-099:C Strange Bank 
再帰関数で解いた。

解説が理解できない。

<!------------------------------------------------------------------------------------------------------------------->
# <a href="#ABC-100">ABC-100</a>
---
- [問題（AtCoderへ）](https://atcoder.jp/contests/abc100/tasks/)
- [ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/ABC-100/)

### ABC-100:C *3 or /2 
2で割り切れる回数の合計を求める

<!------------------------------------------------------------------------------------------------------------------->
# <a href="#ABC-103">ABC-103</a>
---
- [問題（AtCoderへ）](https://atcoder.jp/contests/abc103/tasks/)
- [ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/ABC-103/)

### ABC-103:C Modulo Summation
はじめは全探索してもいいのかなと思ったけど、
よう見たら簡単に計算できることに気づいた。

<!------------------------------------------------------------------------------------------------------------------->
# <a href="#ABC-104">ABC-104</a>
---
- [問題（AtCoderへ）](https://atcoder.jp/contests/abc104/tasks/)
- [ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/ABC-104/)

### ABC-104:C All Green
解説を読んだ。
お手本コードを読んで大体わかったんだけど、
自分で解くのはしんどいなって感じ。

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
# <a href="#ABC-108">ABC-108</a>
---
- [問題（AtCoderへ）](https://atcoder.jp/contests/abc108/tasks/)
- [ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/ABC-108/)

### ABC-108:B Ruined Square
正方形の四つ角のうち、二つが与えられるからあとの二つを求める。
問題は簡単だけど、頭の中でイメージしづらかった。
紙に書いてなんとか分かるくらい。

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

<!------------------------------------------------------------------------------------------------------------------->
# <a href="#ABC-120">ABC-120</a>
---
- [問題（AtCoderへ）](https://atcoder.jp/contests/abc120/tasks/)
- [解説動画](https://youtu.be/zV3Ul2pA2Fw)
- [ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/ABC-120/)

### ABC-120:A Favorite Sound
いつも通りのA問題。
高橋君の癖が強い。
今日はfor文使ってみたけど、
if文でいいと思う。

### ABC-120:B K-th Common Divisor
二つの整数が与えられて、
大きい方から約数を数える問題。
単純に約数を数えて解いた。
最初、「大きい方から数える」ということに気がつかなかったから、
サンプルケースが間違っているのかと思った。
「質問」に同じ質問をしている人がいたから
そう思ったのは私だけではないはず。
正直、問題文が悪いと思う。

### ABC-120:C Unification
解けなかった。
解説を読んでめちゃくちゃ簡単だということに気がついた。
コード自体はA問題くらい簡単。
頭がかっちかちでダメ。
あと、解説動画でカウントするときのおすすめの書き方を見て、なるほどと思った。

```
vector<int> cnt(2, 0); // 長さ2の配列、0で初期化
for(int i = 0; i < S.size(); i++)
{
    // '0' - '0' = 0 : cnt[0]++
    // '1' - '0' = 1 : cnt[1]++
    cnt[S[i] - '0']++;
}
```

<!------------------------------------------------------------------------------------------------------------------->
# <a href="#ABC-121">ABC-121</a>
---
- [問題（AtCoderへ）](https://atcoder.jp/contests/abc121/tasks/)
- [解説動画](https://youtu.be/igfVeTsGeYw)
- [ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/ABC-121/)

### ABC-121:A White Cells 
単純に面積を求めるような問題。
小学生の算数の問題でありそう。

### ABC-121:B Can you solve this?
入力が比較的多い問題。
入力がちゃんとできれば、あとは掛け算して条件分岐させるだけ。

### ABC-121:C Energy Drink Collector
ソートをする問題。
私は自分でマージソートを実装したんだけど（コピペ）、
ふつうにsort関数でいいらしい。
リファレンスを読むとsort関数は強いクイックソートで、
計算量はO(N logN)になっているとのこと。

あと、ふたつの配列を同じようにソートする必要がある。
こういうときはvectorのpairを使うと良いらしい。

別解ではmapを使う解法もある。
mapは勝手にソートもしてくれるらしく、
さらに定義していない要素は勝手に０で初期化してくれてもいるらしい。
つまりめちゃくちゃ便利とのこと。

### ABC-121:D XOR World
これは分からなかったから、解説を読んだ（そして解説動画を見た）。
単純にfor文回したらTLEすることは分かってたから、
何か規則とかあるんだろうなとは思ったけど、
全然見つけられなかった。

解説動画を見て「たしかに情報処理で、xorにそんな規則があるみたいな話は聞いたな」
となんとなく思い出せた。
それだけでもコンテストに出たかいがある。

<!------------------------------------------------------------------------------------------------------------------->
# <a href="#ABC-122">ABC-122</a>
---
- [問題（AtCoderへ）](https://atcoder.jp/contests/abc122/tasks/)
- [ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/ABC-122/)

### ABC-122:A Double Helix
ある文字の入力を受けて、
その文字に対応した文字を出力する問題。
場合分けするだけ。

### ABC-122:B ATCoder
条件を満たす文字列の最大の長さを求める問題。
ごり押しで数えた。

### ABC-122:C GeT AC
文字列の指定された範囲にある特定の文字列をカウントする問題。
そのままやるとTLEするから工夫が必要。
累積和的なことをやるんだろうなって思いながら、
よく分からないことをしてバグらせてた。

解説を読んでめちゃくちゃ簡単じゃんってなった。
これくらいは安定して解きたい。

<!------------------------------------------------------------------------------------------------------------------->
# <a href="#ABC-124">ABC-124</a>
---
- [問題（AtCoderへ）](https://atcoder.jp/contests/abc124/tasks/)
- [ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/ABC-124/)

### ABC-124:A Buttons
AとBの大きいほうを足して一引く。
これを二回行う。

### ABC-124:B Great Ocean View
大きい値を更新していく。
そのときに更新した回数を答える。

### ABC-124:C Coloring Colorfully
Sと同じ長さの文字列を二つ用意。
"10101...101"と"01010...010"。
この二つの文字列とSを一文字ずつ比較して違う個数をカウント。
小さい方が答え。

### ABC-124:D Coloring Colorfully
解けなかった。
圧縮することは思い浮かんだんだけど、
その後がうまくいかなかった。
同時にTLE,RE,WAが出た。

解説動画を見たところ途中まではあってた。
尺取り法か累積和を使うことが思い浮かべばいけたらしい。

<!------------------------------------------------------------------------------------------------------------------->
# <a href="#ARC-095">ARC-095</a>
---
- [問題（AtCoderへ）](https://atcoder.jp/contests/arc095/tasks/)
- [ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/ARC-095/)

### ARC-095:D Binomial Coefficients
複数の整数から二つとってcomb(n,r)が最大となる組を見つける問題。

解説を読んだ。

解き方は理解したけどずっとWAが出て、
どこが悪いのか分からないままちょこちょこいじってたらACした。
よくわからない。

<!------------------------------------------------------------------------------------------------------------------->
# <a href="#AGC-031">AGC-031</a>
---
- [問題（AtCoderへ）](https://atcoder.jp/contests/agc031/tasks/)
- [ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/AGC-031/)

### AGC-031:A Colorful Subsequence
アルファベットの文字列から部分列の数を数える問題。
部分列は異なる文字からしか作れない。

始めはごり押しで解こうとしたけど結局ダメだった。
解説を読んでそんな簡単に解けるんだなーという感想。
思いつかない。

<!------------------------------------------------------------------------------------------------------------------->
# <a href="#AGC-032">AGC-032</a>
---
- [問題（AtCoderへ）](https://atcoder.jp/contests/agc032/tasks/)
- [ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/AGC-032/)

### AGC-032:A Limited Insertion
空の数列にN回挿入していく問題。
与えられた数列と一致するかどうかを判定して、
一致するならその操作例を示す。

後ろからやっていくのかなーと思いながらやったけど、
テストケースの半分でWA出てダメだなーって感じ。

何がダメなのかは分かったけど、
解決策が思い浮かばない。

解説を読んだ。

操作を逆順にやるという発想に感動している。
よく考えたら当たり前だけど、
ぱっと思いつかない。

経験不足だろうか。

「最後の操作が何だったかを探す」を繰り返すだけで求められる。
また、その数列で操作可能な数字のうち、一番右を選択する。

<!------------------------------------------------------------------------------------------------------------------->
# <a href="#Mujin2018">Mujin2018</a>
---
- [問題（AtCoderへ）](https://atcoder.jp/contests/mujin-pc-2018)
- [ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/Mujin2018/)

### Mujin2018: C 右折
'.'と'#'から成る二次元配列があり、
ある'.'だけを通って一度右折する道は何通りあるか。
普通にやるとO(N^4)くらいでだめ。

解説動画をみて数え方を変えるだけでO(N^2)にできると知って感動した。

その後なぜか二時間近くWAが出続けてなんだこれって思ってたら、
intのところをCharで宣言していてつらくなった。

<!------------------------------------------------------------------------------------------------------------------->
# <a href="#EXAWIZARDS2018">EXAWIZARDS2018</a>
---
- [問題（AtCoderへ）](https://atcoder.jp/contests/exawizards2019)
- [ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/EXAWIZARDS2018/)

### EXAWIZARDS2018:A Regular Triangle 
正三角形かどうか判定する問題。
三つの辺が等しいかどうかみるだけ。

### EXAWIZARDS2018:B Red or Blue 
文字列の'B'と'R'を数える問題。
それだけ。

<!------------------------------------------------------------------------------------------------------------------->
# <a href="#Tenka1_2019">Tenka1_2019</a>
---
- [問題（AtCoderへ）](https://atcoder.jp/contests/tenka1-2019-beginner)
- [ソースコード](https://github.com/YusukeKato/ProgrammingContest/blob/master/atcoder/Tenka2019/)

### Tenka1_2019:A On the Way 
とくになし

### Tenka1_2019:B *e**** ********e* *e****e* ****e** 
文字を置換するだけ

### Tenka1_2019:C Stones 
累積和が思いつかない。
鍛錬が足りない。

# <a href="#sankou">参考</a>

今すぐ使える C++ コーディングテクニック集
https://torus711.hatenablog.com/entry/20131205/p1

sort リファレンス
https://cpprefjp.github.io/reference/algorithm/sort.html

map まとめ
https://qiita.com/_EnumHack/items/f462042ec99a31881a81

C++で数値を2進数表記で出力する方法（実行時編）
http://code-mynote.blogspot.com/2014/01/c2.html

sstreamを使ってint型からstring型に変換
https://www.sejuku.net/blog/49199
