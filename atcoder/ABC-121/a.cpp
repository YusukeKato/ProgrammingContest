#include <iostream>
using namespace std;

int main()
{
    int H, W;
    int h, w;

    cin >> H >> W;
    cin >> h >> w;

    int res = (H-h) * (W-w);

    cout << res << endl;

    return 0;
}