#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int direction[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    int dfs(vector<vector<int>> &grid, int i, int j, int id)
    {
        if (i < 0 || j < 0 || j >= grid[0].size() || i >= grid.size() || grid[i][j] != 1)
        {
            return 0;
        }
        grid[i][j] = id;
        int left = dfs(grid, i + 1, j, id);
        int right = dfs(grid, i - 1, j, id);
        int up = dfs(grid, i, j + 1, id);
        int down = dfs(grid, i, j - 1, id);
        return (left + right + up + down + 1);
    }
    int largestIsland(vector<vector<int>> &grid)
    {
        int maxi = 0;
        int island_id = 2;
        unordered_map<int, int> mp;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == 1)
                {
                    int size = dfs(grid, i, j, island_id);
                    maxi = max(maxi, size);
                    mp[island_id] = size;
                    island_id++;
                }
            }
        }
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == 0)
                {
                    set<int> st;
                    for (auto di : direction)
                    {
                        int x = di[0] + i;
                        int y = di[1] + j;
                        if (x >= 0 && y >= 0 && x < grid.size() && y < grid[0].size() && grid[x][y] != 0)
                        {
                            st.insert(grid[x][y]);
                        }
                    }
                    int sum = 1;
                    for (auto ii : st)
                    {
                        int value = mp[ii];
                        sum = sum + value;
                    }
                    maxi = max(maxi, sum);
                }
            }
        }
        return maxi;
    }
};
int main()
{

    return 0;
}