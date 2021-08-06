#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        priority_queue<long long int> pq;
        for (auto i : mp)
        {
            pq.push(i.first * i.second);
        }
        long long int ans = 0;
        while (k != 0 && pq.empty() == false)
        {
            long long int x = pq.top();
            pq.pop();
            if (ans + x <= ans)
            {
                continue;
            }
            ans += x;
            k--;
        }

        cout << ans << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        multiset<ll> s;
        int i;
        vector<int> vec(n);
        for (i = 0; i < n; i++)
            cin >> vec[i];
        sort(vec.begin(), vec.end());
        for (i = 0; i < n; i++)
        {
            int j = i;
            while (j < n && vec[j] == vec[i])
                j++;
            s.insert((j - i) * 1ll * vec[i]);
            i = j - 1;
        }
        ll sum = 0;
        int cnt = 0;
        while (s.size() && cnt < k)
        {
            ll ele = *s.rbegin();
            if (ele <= 0)
                break;
            sum += ele;
            cnt++;
            s.erase(s.find(ele));
        }
        cout << sum << '\n';
    }
}