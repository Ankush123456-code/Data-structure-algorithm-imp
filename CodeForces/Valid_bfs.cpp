#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int n = 2e5 + 5;
vector<ll> ind(n);
vector<vector<int>> adj(n);
vector<bool> vis(n + 1, false);
vector<ll> bfs()
{

    vector<ll> ans;
    queue<ll> pq;
    pq.push(1);
    vis[1] = true;
    while (pq.empty() == false)
    {
        ll p = pq.front();
        ans.push_back(p);
        pq.pop();
        for (auto i : adj[p])
        {
            if (vis[i] == false)
            {
                vis[i] = true;
                pq.push(i);
            }
        }
    }
    return ans;
}
bool cmp(ll i, ll j)
{
    return ind[i] < ind[j];
}
int main()
{
    cin >> n;
    for (ll i = 0; i < n - 1; i++)
    {
        ll x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    vector<ll> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        int j;
        cin >> j;
        arr[i] = j;
        ind[arr[i]] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        sort(adj[i].begin(), adj[i].end(), cmp);
    }
    if (bfs() == arr)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}