#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
#define pb push_back
int dfs(int i, int j, vector<vector<int>> &grid, vector<vector<int>> &dp)
{
    if (i >= grid.size() || j >= grid[0].size())
    {
        return INT_MAX;
    }
    if (i == grid.size() - 1 && j == grid[0].size())
    {
        return grid[i][j];
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    int left = dfs(i, j + 1, grid, dp);
    int right = dfs(i + 1, j, grid, dp);
    dp[i][j] = min(left, right) + grid[i][j];
    return dp[i][j];
}
int minPathSum(vector<vector<int>> &grid)
{
    vector<vector<int>> dp(grid.size(), vector<int>(grid[0].size(), -1));
    return dfs(0, 0, grid, dp);
}
int main()
{

    return 0;
}