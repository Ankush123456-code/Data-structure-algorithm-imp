#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod = 1000000007;
vector<int> g[100005];
vector<bool> visited(100005);
int length;
void dfs(int u)
{
    visited[u] = true;
    length++;
    for (auto i : g[u])
    {
        if (visited[i] == false)
        {
            dfs(i);
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int v, e;
        cin >> v >> e;
        for (int i = 0; i < v; i++)
        {
            g[i].clear();
            visited[i] = false;
        }

        for (int i = 0; i < e; i++)
        {
            int x, y;
            cin >> x >> y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        vector<int> len;
        ll ans = 1;
        for (int i = 0; i < v; i++)
        {
            if (visited[i] == false)
            {
                length = 0;
                len.push_back(length);
                ans = (ans * length) % mod;
            }
        }
        cout << len.size() << " " << ans << endl;
    }

    return 0;
}