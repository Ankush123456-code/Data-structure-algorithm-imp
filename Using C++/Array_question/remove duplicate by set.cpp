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
vector<int> v{1,2,3,4,5,5,6,7,8};
set<int> s;
sort(v.begin(),v.end());
for (int i = 0; i < v.size(); i++)
{
    s.insert(v[i]);
}
for (auto &&i : s)
{
    cout<<i<<endl;
}

    return 0;
}