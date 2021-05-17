#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int> productExceptSelf(vector<int> &nums)
{
    int pd = 1;
    int pd2 = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        pd = pd * nums[i];
        if (nums[i] != 0)
        {
            pd2 = pd2 * nums[i];
        }
    }
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i])
        {

            ans.push_back(pd / nums[i]);
        }
        else if (nums[i] == 0)
        {
            ans.push_back(pd2);
        }
    }
    return ans;
}

;
int main()
{

    return 0;
}