#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<int> res;  //space
        vector<int> even; // space
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                even.push_back(arr[i]);
            }
        }
        for (int i = 0; i < even.size(); i++)
        {
            if (even[i] % 5 == 0)
            {
                res.push_back(even[i]);
            }
        }
        sort(res.begin(), res.end(), greater<int>());
        sort(even.begin(), even.end(), greater<int>());
        for (int i = 0; i < even.size(); i++)
        {
            if (even[i] % 5 != 0)
            {
                res.push_back(even[i]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0)
            {
                res.push_back(arr[i]);
            }
        }

        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i] << " ";
        }
    }

    return 0;
}