// sample input

// 2
// 4 2
// 1 2
// 1 3
// 1
// 3 1
// 2 3
// 2

// sample output

// 6 6 -1 
// -1 6


#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> g[n + 1];
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        int s;
        cin >> s;
        queue<int> q;
        vector<int> ans(n + 1, INT_MAX);
        q.push(s);
        ans[s] = 0;
        while (!q.empty())
        {
            int curr = q.front();
            q.pop();
            for (auto i : g[curr])
            {
                if (ans[i] > ans[curr] + 6)
                {
                    ans[i] = ans[curr] + 6;
                    q.push(i);
                }
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (ans[i] == INT_MAX)
            {
                ans[i] = -1;
            }
        }

        for (int i = 1; i <= n; i++)
        {
            if (i == s)
            {
                continue;
            }
            else
            {
                cout << ans[i] << " ";
            }
        }

        cout << endl;
    }

    return 0;
}