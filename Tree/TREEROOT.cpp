// codechef Root of the Problem

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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int root = 0;
        while (n--)
        {
            int id, sum;
            cin >> id >> sum;
            root += (id - sum);
        }
        cout << root << endl;
    }
    return 0;
}