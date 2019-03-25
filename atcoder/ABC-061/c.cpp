#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main()
{
    long long int N, K;
    cin >> N >> K;

    vector<pair<int, int>> pairs;

    for(int i = 0; i < N; i++)
    {
        int a, b;
        cin >> a >> b;
        pairs.push_back(make_pair(a, b));
    }

    sort(pairs.begin(), pairs.end());

    long long int cnt = 0;
    for(int i = 0; i < N; i++)
    {
        cnt += pairs[i].second;
        if(K <= cnt)
        {
            cout << pairs[i].first << endl;
            return 0;
        }
    }
}
