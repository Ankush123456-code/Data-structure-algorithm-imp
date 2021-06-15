#include <bits/stdc++.h>

using namespace std;

#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define ll long long int

int arr[1001][1001] = {0};

int vis[1001][1001] = {0};

bool is_valid(ll nx, ll ny, ll n, ll m)
{

    if (nx >= n || ny >= m || ny < 0 || nx < 0 || vis[nx][ny] == 1)
    {

        return false;
    }

    return true;
}

int main()
{

    ll n, m, x, y;

    cin >> n >> m >> x >> y;

    ll i, j, cx, cy, nx, ny;

    queue<pair<ll, ll>> q;

    q.push({x, y});

    vis[x][y] = 1;

    arr[x][y] = 0;

    ll dy[] = {-1, 0, 1, 1, 1, 0, -1, -1};

    ll dx[] = {-1, -1, -1, 0, 1, 1, 1, 0};

    while (!q.empty())
    {

        cx = q.front().first;

        cy = q.front().second;

        q.pop();

        for (i = 0; i < 8; i++)
        {

            nx = cx + dx[i];

            ny = cy + dy[i];

            if (is_valid(nx, ny, n, m))
            {

                vis[nx][ny] = 1;

                arr[nx][ny] = arr[cx][cy] + 1;

                q.push({nx, ny});
            }
        }
    }

    for (i = 0; i < n; i++)
    {

        for (j = 0; j < m; j++)
        {

            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}