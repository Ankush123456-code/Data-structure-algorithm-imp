#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void dfs(vector<vector<ll>> &g, int s, vector<bool> &vis, ll &ans)
{
    vis[s] = true;
    ans++;
    for (auto i : g[s])
    {
        if (vis[i] == false)
        {
            dfs(g, i, vis, ans);
        }
    }
}
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        ll n, m, l, r;
        cin >> n >> m >> l >> r;
        vector<vector<ll>> g(n + 1);
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        ll anss = 0;
        ll ans;
        vector<ll> ans1;
        vector<bool> visited(n + 1, false);
        for (int i = 1; i <= n; i++)
        {
            if (g[i].size() > 0 && visited[i] == false)
            {
                ans = 0;
                dfs(g, i, visited, ans);
                ans1.push_back(ans);
            }
            else if (g[i].size() == 0)
            {
                ans1.push_back(1);
            }
        }
        ll sol = 0;
        for (int i = 0; i < ans1.size(); i++)
        {
            sol += min((ans1[i] - 1) * r + l, ans1[i] * l);
        }
        cout << sol << endl;
    }

    return 0;
}