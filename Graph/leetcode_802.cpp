#include <bits/stdc++.h>
using namespace std;
#define ll long long int
unordered_set<int> safe;
unordered_set<int> cycle;
bool dfs(vector<vector<int>> &g, int i, unordered_set<int> vis)
{
    if (safe.find(i) != safe.end())
    {
        return true;
    }
    if (cycle.find(i) != cycle.end())
    {
        return false;
    }
    if (vis.find(i) != vis.end())
    {
        cycle.insert(i);
        return false;
    }
    vis.insert(i);
    for (auto &x : g[i])
    {
        if (!dfs(g, x, vis))
        {
            cycle.insert(i);
            return false;
        }
    }
    safe.insert(i);
    return true;
}
vector<int> eventualSafeNodes(vector<vector<int>> &graph)
{
    vector<int> ans;
    unordered_set<int> vis;
    for (int i = 0; i < graph.size(); i++)
    {
        if (dfs(graph, i, vis))
        {
            ans.push_back(i);
        }
    }
    return ans;
}
int main()
{

    return 0;
}