#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n, m;
        cin >> n >> m;
        unordered_set<int> st;
        for (int i = 0; i < n; i++)
        {
            /* code */
            int a;
            cin >> a;
            st.insert(a);
        }

        for (int i = 0; i < m; i++)
        {
            int b;
            cin >> b;
            if (st.find(b) != st.end())
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
            st.insert(b);
        }
    }

 
    return 0;
}