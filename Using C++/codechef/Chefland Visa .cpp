#include <bits/stdc++.h>
using namespace std;
#define ll long long int
string solve(int x1, int x2, int y1, int y2, int z1, int z2)
{
    if ((x2 >= x1) && (y2 >= y1) && (z1 == z2))
    {
        return "yes";
    }
    return "No";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x1, x2, y1, y2, z1, z2;
        cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2;
        cout << solve(x1, x2, y1, y2, z1, z2) << endl;
    }

    return 0;
}