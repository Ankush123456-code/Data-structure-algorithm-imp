#include <bits/stdc++.h>
using namespace std;
vector<string> solve(vector<string> word, string qu)
{
    vector<string> ans;
    for (auto it : word)
    {
        int j = 0;
        int i = 0;
        while (j < qu.size() and i < it.size())
        {
            if (qu[j] == it[i])
            {
                j++;
                i++;
            }
            else
            {
                break;
            }
        }
        if (j == qu.size())
        {
            ans.push_back(it);
        }
    }
    return ans;
}
int main()
{
    vector<string> word{"jackson", "jacques", "jack"};
    string qu = "jack";
    vector<string> ans;
    ans = solve(word, qu);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}