#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <vector>
#include <set>
#include <stack>
#include <map>
#include <iomanip>
#include <cmath>
using namespace std;
double sumofhp(int n)
{
    double sum = 0;
    if (n == 0)
    {
        cout << '"' << 0.0 << '"' << endl;
    }
    else if (n == 1)
    {
        cout << '"' << 1.0 << '"' << endl;
    }
    double a = 1.0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + 1 / a;
        a = a + 3;
    }

    return sum;
}
int main()
{
    int n;
    cout << "enter the term" << endl;
    cin >> n;
    double sum1 = sumofhp(n);
    cout << '"' << setprecision(4) << sum1 << '"' << endl;
    return 0;
}