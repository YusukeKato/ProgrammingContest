#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> ansv;
vector<int> costv;
int a[] = {1,2,3,4,5,6,7};
int N;
int cf, cb;

void dfs(vector<int> v, int num, int cost, vector<char> s)
{
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    bool flag[8] = {false};
    for(int i = 0; i < v.size(); i++)
    {
        for(int j = 1; j <= N; j++)
        {
            if(v[i] == j)
            {
                flag[v[i]] = true;
            }
        }
    }
    bool flag2 = true;
    for(int i = 1; i <= N; i++)
    {
        if(flag[i] == false)
        {
            flag2 = false;
        }
    }
    if(flag2 == true)
    {
        costv.push_back(cost);
        ansv.push_back(v);
        return;
    }

    for(int i = 1; i <= N; i++)
    {
        if(s[i-1] == 'd') continue;
        if(i == num) continue;
        int sub_cost = cost;
        if(i > num) sub_cost += cf;
        else if(i < num) sub_cost += cb;
        vector<int> sub_v;
        for(int j = 0; j < v.size(); j++)
        {
            sub_v.push_back(v[j]);
        }
        sub_v.push_back(i);
        vector<char> sub_s;
        for(int j = 0; j < s.size(); j++)
        {
            sub_s.push_back(s[j]);
        }
        for(int j = i+1; j < N; j++)
        {
            if(sub_s[j] == 's') sub_s[j] = 'd';
            else if(sub_s[j] == 'd') sub_s[j] = 's';
        }
        dfs(sub_v, i, sub_cost, sub_s);
    }

    return;
}

int main()
{
    cin >> N;
    cin >> cf >> cb;
    string cins;
    cin >> cins;
    vector<char> s(8);
    for(int i = 0; i < N; i++)
    {
        s[i] = cins[i];
    }

    cout << "test1" << endl;

    vector<int> v;
    v.push_back(N);
    int cost = 0;
    dfs(v, N, cost, s); 

    cout << "test2" << endl;

    int idx = 0;
    int minval = 9999999;
    for(int i = 0; i < costv.size(); i++)
    {
        if(minval > costv[i])
        {
            minval = costv[i];
            idx = i;
        }
    }

    for(int i = 0; i < ansv[idx].size(); i++)
    {
        cout << ansv[idx][i];
        if(i == ansv[idx].size()-1) cout << endl;
    }

    return 0;
}
