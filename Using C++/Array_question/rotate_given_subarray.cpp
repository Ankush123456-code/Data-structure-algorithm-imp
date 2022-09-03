#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <cmath>
using namespace std;
vector<int> rotate_sub_array(vector<int> &v, int k)
{ int len=v.size();
    for (int i = 0; i < len; i = i + k)
    {
        int j = i;
        int end = min(i + k - 1, len - 1);
        while (j < end)
        {
            int temp;
            temp = v[end];
            v[end] = v[j];
            v[j] = temp;
            j++;
            end--;
        }
    }
    return v;
}
int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 4, 5, 6, 7};
    int k = 5;
    vector<int> v1;
   v1= rotate_sub_array(v, k);
   for (auto &&i : v1)
   {
       cout<<i<<" ";
   }
   
    return 0;
}