#include <bits/stdc++.h>
using namespace std;
int replaceDigit(int x, int d1, int d2)
{
    int result = 0, multiply = 1;

    while (x / 10 > 0)
    {
        int remainder = x % 10;
        if (remainder == d1)
            result = result + d2 * multiply;

        else
            result = result + remainder * multiply;
        multiply *= 10;
        x = x / 10;
    }
    if (x == d1)
        result = result + d2 * multiply;
    else
        result = result + x * multiply;
    return result;
}
int reversDigits(int num)
{
    int rev_num = 0;
    while (num > 0)
    {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}
float solve(vector<int> arr)
{
    float avg = 0;
    vector<int> arr1(arr.size(), 0);
    for (int i = 0; i < arr.size(); i++)
    {
        int ans = replaceDigit(arr[i], 6, 9);
        arr1[i] = ans;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != arr1[i])
        {
            arr[i] = reversDigits(arr1[i]);
        }
    }
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }
    avg = sum / arr.size();
    return avg;
}
int main()
{
    string str;
    cin >> str;
    vector<int> arr;
    stringstream ss(str);
    for (int i; ss >> i;)
    {
        arr.push_back(i);
        if (ss.peek() == ',')
            ss.ignore();
    }
    float ans = solve(arr);
    cout << fixed << setprecision(2) << ans;
    return 0;
}