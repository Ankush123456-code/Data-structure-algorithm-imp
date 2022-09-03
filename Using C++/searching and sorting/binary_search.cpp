#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int solve(vector<int> arr, int x)
{
    int i = 0;
    int j = arr.size() - 1;
    while (i <= j)
    {
        /* code */
        int mid = i + (j - i) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (x < arr[mid])
        {
            j = mid - 1;
        }
        else
        {
            i = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int x;
    cin >> x;
    cout << solve(v, x) << endl;
    return 0;
}