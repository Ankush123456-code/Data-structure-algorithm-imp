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
int recursion(int a)
{
    if (a < 10)
    {
        return a;
    }
  return a%10 +recursion(a/10);
}
int main()
{
    cout << recursion(256) << endl;
    return 0;
}