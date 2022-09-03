#include <bits/stdc++.h>
using namespace std;
#define ll long long int
priority_queue<int> maxi;
priority_queue<int, vector<int>, greater<int>> mini;
void addNum(int num)
{
    maxi.push(num);
    mini.push(maxi.top());
    maxi.pop();
    if (maxi.size() - mini.size() == 1)
    {
        mini.push(maxi.top());
        maxi.pop();
        return;
    }
    else if (maxi.size() - mini.size() > 1)
    {
        maxi.push(mini.top());
        mini.pop();
    }
}
double findMedian()
{
    if (maxi.size() > mini.size())
    {
        return maxi.top();
    }
    else
    {
        return (maxi.top() + mini.top()) / 2.0;
    }
}
int main()
{
    addNum(25);
    cout << findMedian() << endl;
    addNum(7);
    cout << findMedian() << endl;
    addNum(10);
    cout << findMedian() << endl;
    addNum(15);
    cout << findMedian() << endl;

    return 0;
}