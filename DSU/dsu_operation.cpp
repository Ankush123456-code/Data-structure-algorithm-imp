#include <bits/stdc++.h>
using namespace std;

vector<int> parent;
vector<int> size;
// in dsu we have 3 operation number
// 1 make set
// 2 find_set
// 3 make union
void make_set(int x)
{
    parent[x] = x;
    size[x] = 1;
}
int find_set(int x)
{
    if (parent[x] == x)
    {
        return x;
    }
    // doing path commpression
    parent[x] = find_set(parent[x]);
    return parent[x];
}
void union_operation(int a, int b)
{
    a = find_set(a);
    b = find_set(b);
    if (a != b)
    {
        if (size[a] < size[b])
        {
            swap(a, b);
        }
        parent[b] = a;
        size[a] += size[b];
    }
}
int main()
{

    return 0;
}