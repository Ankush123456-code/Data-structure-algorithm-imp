#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int v, e;
    cin >> v >> e;
    vector<int> g[v + 1];
    vector<int> in(v + 1, 0);
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        in[y]++;
    }
    vector<int> ans(v + 1, 0);
    queue<int> q;
    for (int i = 0; i <= v; i++)
    {
        if (in[i] == 0)
        {
            q.push(i);
            ans[i] = 1;
        }
    }
    while (!q.empty() == false)
    {
        int val = q.front();
        q.pop();
        for (auto i : g[val])
        {
            in[i]--;
            if (in[i] == 0)
            {
                ans[i] = ans[val] + 1;
                q.push(i);
            }
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}