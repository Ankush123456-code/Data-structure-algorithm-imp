#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void kthLargest(int arr[], int n, int k)
{
    // your code here
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < k; i++)
    {
        pq.push(arr[i]);
        if (i < k - 1)
        {
            cout << -1 << " ";
        }
        else
        {
            cout << pq.top() << " ";
        }
    }
    for (int i = k; i < n; i++)
    {
        if (pq.top() < arr[i])
        {
            pq.pop();
            pq.push(arr[i]);
        }
        cout << pq.top() << " ";
    }
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
        kthLargest(arr, num, k);
    }
    return 0;
}