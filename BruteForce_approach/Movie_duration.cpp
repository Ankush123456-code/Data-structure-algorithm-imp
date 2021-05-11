// Passengers complain that they have to abandon movie in between because it crosses over the duration of the flight.

// You need to recommend two movies from a list of movies such that their total duration is exactly equal to 30 minutes less than the flight duration.

// If there are multiple combinations possible, select the one which has highest run time.

// Only two movies can be selected and the movies can’t be repeated.

// If there are no possible results then return a tuple -1 -1

// Input Format

// First line of the input is the flight duration. Second line of the input is the number of available movie durations that follow in the next line. Third line contains space separated numbers which are durations of the movies.

// Constraints

// 31  flightDuration  10000

// 1  number of all movies  10000

// 0  movie duration  10000

// Output Format

// Output two numbers which are index of the selected movies that are space separated.

// Sample Input 0

// 90
// 7
// 10 20 60 40 50 70 110
// Sample Output 0

// 0 4
// Explanation 0

// First number in the input is the flightDuration. flightDuration: 90

// Second number in the input is the number of movies. numMovies: 7

// Inputs following it is the duration of each movie. movieDurations: [10, 20, 60, 40, 50, 70, 110]

// There are 2 valid combination of movies whose total duration equals 30 minutes less than the flight duration.

// 0 4 -> 10 + 50 = 90 - 30

// 1 3 -> 20 + 40 = 90 - 30

// Outputs correspond to the index (starting from 0) of movies in movieDurations array.

// Out of this, 0 4 combination has movie (50) with longer duration as compare to (40) therefore it is selected.

// Sample Input 1

// 90
// 7
// 20 5 60 40 50 55 110
// Sample Output 1

// 1 5
// Explanation 1

// Movie duration at indices 1 and 5 is the only valid combination (1, 5) -> 5 + 55 = 90 - 30
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(int arr[], int n, int d)
{

    vector<int> ans;
    int maxi = 0;
    int first = -1;
    int second = -1;
    for (int i = 0; i < n; i++)
    {
        int a = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            /* code */

            int b = arr[j];
            int res = (j - i);

            if (a + b == d - 30 && maxi < res)
            {
                first = i;
                second = j;
                maxi = res;
            }
        }
    }
    cout << endl;
    ans.push_back(first);
    ans.push_back(second);
    for (auto i : ans)
    {
        cout << i << " ";
    }
}
int main()
{

    int d;
    cin >> d;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    solve(arr, n, d);

    return 0;
}