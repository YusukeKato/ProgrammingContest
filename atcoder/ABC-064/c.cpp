#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int a[N] = {0};
    for(int i = 0; i < N; i++) cin >> a[i];

    int colors[9];
    for(int i = 0; i < 9; i++) colors[i] = 0;

    for(int i = 0; i < N; i++)
    {
        if(0 < a[i] and a[i] < 400) //灰色
        {
            colors[0]++;
        }
        else if(400 <= a[i] and a[i] < 800) //茶色
        {
            colors[1]++;
        }
        else if(800 <= a[i] and a[i] < 1200) //緑色
        {
            colors[2]++;
        }
        else if(1200 <= a[i] and a[i] < 1600) //水色
        {
            colors[3]++;
        }
        else if(1600 <= a[i] and a[i] < 2000) //青色
        {
            colors[4]++;
        }
        else if(2000 <= a[i] and a[i] < 2400) //黄色
        {
            colors[5]++;
        }
        else if(2400 <= a[i] and a[i] < 2800) //橙色
        {
            colors[6]++;
        }
        else if(2800 <= a[i] and a[i] < 3200) //赤色
        {
            colors[7]++;
        }
        else if(3200 <= a[i]) //好きな色
        {
            colors[8]++;
        }
    }


    int cnt = 0;
    for(int i = 0; i < (9-1); i++)
    {
        if(colors[i] > 0) cnt++;
    }

    cout << max(1, cnt) << " " << cnt+colors[8] << endl;

    return 0;
}
