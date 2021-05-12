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
    int num = 65;
    int row;
    cout << "enter the number of row" << endl;
    cin >> row;
    for (int i = 0; i <= row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            char ch = char(num);
            cout << ch << " ";
        }
        cout << endl;
        num = num + 1;
    }

    return 0;
}