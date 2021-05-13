#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int N = 1e5 + 2;
bool vis[N];
vector<int> adj[N];
void dfs(int node)
{
    // preorder
    vis[node] = 1;
    cout << node << " ";
    // inorder
    for (auto it = adj[node].begin(); it != adj[node].end(); it++)
    {
        if (vis[*it] == false)
        {
            dfs(*it);
        }
    }
    // postorder
}
int main()
{
    int n, m;
    cin >> n >> m;
    int x, y;
    for (int i = 0; i <= n; i++)
    {
        vis[i] = false;
    }

    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1);

    return 0;
}