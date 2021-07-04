#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void k_swap(string str, int k, string &max)
{

    if (k == 0)
        return;

    int n = str.length();

    for (int i = 0; i < n - 1; i++)
    {

        for (int j = i + 1; j < n; j++)
        {

            if (str[i] < str[j])
            {

                swap(str[i], str[j]);

                if (str.compare(max) > 0)
                    max = str;

                k_swap(str, k - 1, max);
                // backtracking
                swap(str[i], str[j]);
            }
        }
    }
}

int main()
{
    string str;
    cin >> str;
    int k;
    cin >> k;
    string max = str;
    k_swap(str, k, max);
    cout << max << endl;
    return 0;
}