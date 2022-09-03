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
class Solution
{
public:
    long long int dfs(vector<vector<long long int>> &dp, int arr[], int n, int m)
    {
        if (m < 0 || n < 0)
        {
            return 0;
        }
        if (dp[m][n] != -1)
        {
            return dp[m][n];
        }
        if (n == 0)
        {
            return 1;
        }

        long long int res = dfs(dp, arr, n, m - 1);
        if (arr[m] <= n)
        {
            res = res + dfs(dp, arr, n - arr[m], m);
        }
        dp[m][n] = res;
        return dp[m][n];
    }
    long long int count(int arr[], int m, int n)
    {
        vector<vector<long long int>> dp(m + 1, vector<long long int>(n + 1, -1));
        return dfs(dp, arr, n, m - 1);
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[m];
        for (int i = 0; i < m; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.count(arr, m, n) << endl;
    }
    return 0;