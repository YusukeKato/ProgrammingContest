#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string sa;
    string sb;
    string sc;
    cin >> sa;
    cin >> sb;
    cin >> sc;

    int a = 0;
    int b = 0;
    int c = 0;

    bool flag = true;
    char turn = 'a';
    while(flag)
    {
        if(turn == 'a')
        {
            if(a >= sa.size())
            {
                flag = false;
            }
            else
            {
                turn = sa[a];
                a++;
            }
        }
        else if(turn == 'b')
        {
            if(b >= sb.size())
            {
                flag = false;
            }
            else
            {
                turn = sb[b];
                b++;
            }
        }
        else if(turn == 'c')
        {
            if(c >= sc.size())
            {
                flag = false;
            }
            else
            {
                turn = sc[c];
                c++;
            }
        }
    }

    if(turn == 'a') cout << 'A' << endl;
    else if(turn == 'b') cout << 'B' << endl;
    else if(turn == 'c') cout << 'C' << endl;

    return 0;
}
