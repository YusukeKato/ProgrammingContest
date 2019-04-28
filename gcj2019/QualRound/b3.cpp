#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for(int i = 0; i < T; i++)
    {
        int N;
        cin >> N;
        string s;
        cin >> s;

        vector<char> v;
        for(int j = 0; j < s.size(); j++)
        {
            if(s[j] == 'E') v.push_back('S');
            else if(s[j] == 'S') v.push_back('E');
        }

        cout << "Case #" << i+1 << ": ";
        for(int j = 0; j < v.size(); j++)
        {
            cout << v[j];
        }
        cout << endl;
    }

    return 0;
}
