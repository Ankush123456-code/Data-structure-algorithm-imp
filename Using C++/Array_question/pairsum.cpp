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
int main()
{
    vector<int> v{1, 2, 4, 3, 5, 7, 6};
    int sum = 9;
    sort(v.begin(), v.end());
    int low = 0;
    int high = v.size() - 1;
    while (low < high)
    {
        if (v[low] + v[high] > sum)
        {
            high--;
        }
        else if (v[low] + v[high] < sum)
        {
            low++;
        }
        else if (v[low] + v[high] == sum)
        {
            cout << "pair (" << v[low]<<"  " << v[high] << ")" << endl;
            low++;
            high--;
        }
        else
        {
            cout<<"nothing"<<endl;
        }
        
    }

    return 0;
}