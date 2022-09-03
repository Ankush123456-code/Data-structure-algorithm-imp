#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    int arr[5] = {1, 2, 3, 6, 9};
    unordered_map<int, int> mp;
    for (size_t i = 0; i < 5; i++)
    {
        mp[arr[i]]++;
    }
    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}