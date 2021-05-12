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
bool poweroftwo(int n)
{
    if (n == 0)
    {
        return false;
    }

    return ((n & (n - 1)) == 0);
}
int main()
{
    int n;
    cout << "Enter the number to check if the number is power of zero" << endl;
    cin >> n;
    cout << poweroftwo(n) << endl;
    return 0;
}