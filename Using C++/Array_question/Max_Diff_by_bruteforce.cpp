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
int max_diff(vector<int> &v)
{
   
    int max1=0;

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i+1; j < v.size() ; j++)
        {
           if (v[i]<v[j])
           {
               max1=max(max1,(v[j]-v[i]));
           }
           
        }
        
    }
    return max1;
}
int main()
{
    vector<int> a{2, 7, 5, 3, 13, 1};
    int diff=max_diff(a);
    cout<<diff<<endl;
    return 0;
}