#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int countConsistentStrings(string s, vector<string> &words)
{
    unordered_set<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        st.insert(s[i]);
    }
    int c = 0;
    for (int i = 0; i < words.size(); i++)
    {
        for (int j = 0; j < words[i].size(); j++)
        {
            if (st.find(words[i][j]) != st.end())
            {
                continue;
            }
            else
            {
                break;
            }
        }
        c++;
    }
    return c;
}
int main()
{
    return 0;
}