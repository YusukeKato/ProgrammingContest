// 解説読んだ
// 条件を見逃した
// sx < tx, sy < ty の条件がなくなったらかなり面倒くさい気がする

/**
 * 条件、sx < tx, sy < ty が重要
 * この条件があるから考えるケースはかなり限られる
 * つまり、直線（真上とか）がない、マイナス方向もない
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 入力
    int sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;

    // 距離の差分をとる
    int dx = tx - sx;
    int dy = ty - sy;

    // 出力する文字列
    string s = "";

    // 1
    for(int i = 0; i < dx; i++) s += 'R';
    for(int i = 0; i < dy; i++) s += 'U';

    // 2
    for(int i = 0; i < dx; i++) s += 'L';
    for(int i = 0; i < dy; i++) s += 'D';

    // 3
    s += 'D';
    for(int i = 0; i < dx+1; i++) s += 'R';
    for(int i = 0; i < dy+1; i++) s += 'U';
    s += 'L';

    // 4
    s += 'U';
    for(int i = 0; i < dx+1; i++) s += 'L';
    for(int i = 0; i < dy+1; i++) s += 'D';
    s += 'R';

    // 出力
    cout << s;
}