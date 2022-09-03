#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(int arr[], int n)
{
    cout << "Ankush" << endl;
    int i = -1, j = n;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < 0);
        do
        {
            j--;
        } while (arr[j] >= 0);
        if (i >= j)
            return;
        swap(arr[i], arr[j]);
    }
}
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }

    solve(arr, n);
    for (int x : arr)
        cout << x << " ";

    return 0;
}