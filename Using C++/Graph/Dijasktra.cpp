#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vvp = vector<vector<pair<int, int>>>;
using vl = vector<ll>;
using vvl = vector<vl>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
#define pb push_back
int n = 1e5 + 5;
vvp adj(n);
int disktra(int src, int dest, int n)
{
    vi dist(n, INT_MAX);
    set<pair<int, int>> st;
    st.insert({0, src});
    while (st.empty() == false)
    {
        auto it = st.begin();
        int node = it->second;
        int distTill = it->first;
        for (auto nbr : adj[node])
        {
            int nbr1 = nbr.first;
            int distPadosi = nbr.second;
            if (distPadosi + distTill < dist[nbr1])
            {
                auto f = st.find({dist[nbr1], nbr1});
                if (f != st.end())
                {
                    st.erase(f);
                }
                dist[nbr1] = distPadosi + distTill;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << dist[i] << " ";
    }
    return dist[dest];
}
int main()
{
    cin >> n;
    int x, y, w;
    for (int i = 0; i < n + 1; i++)
    {
        cin >> x >> y, w;
        adj[x].pb({y, w});
        adj[y].pb({x, w});
    }
    disktra(0, n - 1, n);

    return 0;
}