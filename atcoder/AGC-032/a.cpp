#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> b(N, 0);

    for(int i = 0; i < N; i++) cin >> b[i];

    for(int i = 0; i < N; i++)
    {
        if(b[i] > i+1)
        {
            cout << "-1" << endl;
            return 0;
        }
    }

    vector<int> bb;
    for(int j = 0; j < N; j++)
    {
        bool flag = true;
        for(int i = b.size(); flag and i > 0; i--)
        {
            if(i == b[i-1])
            {
                bb.push_back(b[i-1]);
                b.erase(b.begin()+(i-1));
                flag = false;
            }
        }
    }

    for(int i = N-1; i >= 0; i--)
    {
        cout << bb[i] << endl;
    }

    return 0;
}
