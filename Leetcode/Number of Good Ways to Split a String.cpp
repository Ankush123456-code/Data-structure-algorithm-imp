#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int numSplits(string s)
    {
        unordered_map<char, int> mp1, mp2;
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            mp1[s[i]]++;
        }
        for (int i = 0; i < s.size(); i++)
        {
            mp1[s[i]]--;
            if (mp1[s[i]] == 0)
            {
                mp1.erase(s[i]);
            }
            mp2[s[i]]++;
            if (mp2.size() == mp1.size())
            {
                count++;
            }
        }
        return count;
    }
};
int main()
{

    return 0;
}