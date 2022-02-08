#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
#define pb push_back
vector<int> teamgroup(string str)
{
    vector<int> v;
    int j = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ',')
        {
            v.push_back(stoi(str.substr(j, i - j)));
        }
        j=i+1;
    }
}
int main()
{

    return 0;
}