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
void countoccurence(vector<int> v)
{
    
    for (int i = 0; i < v.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < v.size(); j++)
        {
            if (v[i] == v[j])
            {
                count++;
            }
        }
        if (count % 2 != 0)
        {
            cout << v[i] << endl;
        }
    }
}
int main()
{
    vector<int> v{3, 3, 4, 4, 4, 5, 4, 7, 7};
    countoccurence(v);
    return 0;
}