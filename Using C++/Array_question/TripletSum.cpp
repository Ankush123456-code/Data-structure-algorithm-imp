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
bool TripletSum(vector<int> &v)
{
    for (int i = 0; i < v.size() - 2; i++)
    {
        for (int j = i + 1; j < v.size() - 1; j++)
        {
            for (int k = j + 1; k < v.size(); k++)
            {
                if (v[i] + v[j] + v[k] == 0)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
    }
    return false;
}

int main()
{
    vector<int> v{1, 2, 3, -3, 4, -2};
    bool a = TripletSum(v);
    cout << a << endl;
    return 0;
}