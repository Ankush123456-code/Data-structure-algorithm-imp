#include <bits/stdc++.h>
using namespace std;

#define ll long long int
static int global = 0;
static int ans = 0;
static int count1 = 0;
int main()
{
    int q;
    cin>>q;
    while (q--)
    {
        /* code */
        int a,b;
        cin>>a>>b;
        global=a-global;
        ans+=global;
        if(ans<b)
        {
            count1++;
        }
        else{
            global=a;
            ans-=b;
        }
    }
    
    cout<<count1<<endl;

    return 0;
}