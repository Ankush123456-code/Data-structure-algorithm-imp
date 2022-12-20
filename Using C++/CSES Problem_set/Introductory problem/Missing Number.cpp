#include <bits/stdc++.h>
using namespace std;

void solve(long long n, vector<long long> arr)
{
    long long tt = (n) * (n + 1) / 2;
    for (long long i = 0; i < n - 1; i++)
    {
        tt -= arr[i];
    }
    cout << tt << " ";
}
int main()
{
    long long n;
    cin >> n;
    vector<long long> arr;
    for (long long i = 0; i < n - 1; i++)
    {
        long long val;
        cin >> val;
        arr.push_back(val);
    }
    solve(n, arr);
    return 0;
}