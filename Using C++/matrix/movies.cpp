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
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        unordered_set<int> st;
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 1)
            {
                st.insert(arr[i][j]);
            }
        }
    }
    cout << res << endl;
    return 0;
}