#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int32_t main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        /* code */
        ll n, q;
        cin >> n >> q;
        vector<pair<ll, ll>> v;
        for (ll i = 0; i < n; i++)
        {
            ll x, y;
            cin >> x >> y;
            v.push_back({x, y});
        }
        // Step 1 sort
        sort(v.begin(), v.end());
        // step 2 merge interval

        ll idx = 0;
        for (ll i = 1; i < v.size(); i++)
        {
            if (v[idx].second >= v[i].first)
            {
                v[idx].second = max(v[idx].second, v[i].second);
            }
            else
            {
                idx++;
                v[idx] = v[i];
            }
        }
        // step 3 algorithm;

        while (q--)
        {
            /* code */
            ll k;
            cin >> k;
            ll ans = -1;
            for (ll i = 0; i <= idx; i++)
            {
                if ((v[i].second - v[i].first + 1) >= k)
                {
                    ans = v[i].first + k - 1;
                    break;
                }
                else
                {
                    k = k - (v[i].second - v[i].first + 1);
                }
            }
            cout << ans << endl;
        }
    }

    return 0;
}
