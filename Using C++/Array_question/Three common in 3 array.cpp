#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <vector>
#include <set>
#include <stack>
#include <map>
#include <cmath>
using namespace std;
void commonarray(vector<int> &v, vector<int> &v2, vector<int> &v3)
{
    int x = 0;
    int y = 0;
    int z = 0;
    while (x < v.size() && y < v2.size() && z < v3.size())
    {
        if (v[x] == v2[y] && v2[y] == v3[z])
        {
            cout << v[x] << endl;
            x++;
            y++;
            z++;
        }
        else if (v[x] > v2[y])
        {
            y++;
        }
        else if (v2[y] > v3[z])
        {
            z++;
        }
        else
        {
            x++;
        }
    }
}
int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7};
    vector<int> v2{8, 9, 7, 4, 5, 6, 1, 2};
    sort(v2.begin(), v2.end());
    vector<int> v3{8, 9, 6, 5, 4, 23, 1, 2};
    sort(v3.begin(), v3.end());
    commonarray(v, v2, v3);
    return 0;
}
/// time complexity is O(n) this is best approach