#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int> nearlySorted(int arr[], int num, int k)
{

    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> ans;
    for (int i = 0; i < num; i++)
    {
        pq.push(arr[i]);
        if (pq.size() > k)
        {
            ans.push_back(pq.top());
            pq.pop();
        }
    }
    while (!pq.empty())
    {
        ans.push_back(pq.top());
        pq.pop();
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num, k;
        cin >> num >> k;
        int arr[num];
        for (int i = 0; i < num; i++)
        {
            cin >> arr[i];
        }
        vector<int> ans = nearlySorted(arr, num, k);
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
    }

    return 0;
}