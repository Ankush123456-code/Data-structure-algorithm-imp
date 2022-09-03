// O(n^3) approach and O(1) space complexity

// #include <bits/stdc++.h>
// using namespace std;
// int factorial(int n)
// {
//     int fact = 1;
//     for (int i = 2; i <= n; i++)
//     {
//         fact = fact * i;
//     }
//     return fact;
// }
// int main()
// {
//     // cout << "enter number of row" << endl;
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout << factorial(i) / (factorial(j) * factorial(i - j)) << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// O(n^2) approach and O(n^2) space complexity


#include <bits/stdc++.h>
using namespace std;

void PascalPrint(int n)
{

    // An auxiliary array to store
    // generated pscal triangle values
    int arr[n][n];

    // Iterate through every line and
    // print integer(s) in it
    for (int line = 0; line < n; line++)
    {
        // Every line has number of integers
        // equal to line number
        for (int i = 0; i <= line; i++)
        {
            // First and last values in every row are 1
            if (line == i || i == 0)
                arr[line][i] = 1;
            // Other values are sum of values just
            // above and left of above
            else
                arr[line][i] = arr[line - 1][i - 1] +
                               arr[line - 1][i];
            cout << arr[line][i] << " ";
        }
        cout << "\n";
    }
}

// Driver code
int main()
{
    int n;
    cin >> n;
    PascalPrint(n);
    return 0;
}