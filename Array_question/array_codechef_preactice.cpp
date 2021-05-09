/*You are given an array A with size N and a number K. Let's call a position i (1 ≤ i ≤ N) 
valid if, after increasing Ai by K, it would be greater than the sum of all other elements
 in the array A.
constraint:
1 ≤ T ≤ 100,000
1 ≤ N ≤ 100,000
1 ≤ K ≤ 109
1 ≤ Ai ≤ 104 for each valid i
1 ≤ sum of N over all test cases ≤ 100,000
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll totalsum = 0;
        for (int i = 0; i < n; i++)
        {
            totalsum += arr[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (totalsum - arr[i] < arr[i] + k)
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}