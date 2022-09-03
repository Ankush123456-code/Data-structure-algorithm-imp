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
bool checkanagram(string a, string b)
{
    if (a.length() != b.length())
    {
        return false;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] != b[i])
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    return false;
}
int main()
{
    string a = "listen";
    string b = "silent";
    bool c = checkanagram(a, b);
    cout << c << endl;
    return 0;
}