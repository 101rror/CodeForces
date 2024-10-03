#include<bits/stdc++.h>
#define int long long
#define ent endl
#define ld long double
#define no cout<<"NO"<<ent;
#define yes cout<<"YES"<<ent;
#define con continue;
using namespace std;
void solve()
{
    string a,b;
    cin>>a>>b;
    int s=0,n=0;
    s=a.size();
    n=b.size();
    if(a[s-1]==b[n-1] and b[n-1]=='S' and s>n)
    {
        cout<<"<"<<ent;
        return;
    }
     if(a[s-1]==b[n-1] and a[s-1]=='S' and s<n)
    {
        cout<<">"<<ent;
        return;
    }
    if(a==b)
    {
        cout<<"="<<ent;
    }
    else
    {
        if(a[s-1]=='S' and b[n-1]=='L' || a[s-1]=='S' and b[n-1]=='M' || a[s-1]=='M' and b[n-1]=='L' || a[s-1]==b[n-1] and s<n)
        {
            cout<<"<"<<ent;
        }
        if(a[s-1]=='L' and b[n-1]=='S' || a[s-1]=='M' and b[n-1]=='S' || a[s-1]=='L' and b[n-1]=='M' || a[s-1]==b[n-1] and s>n)
        {
            cout<<">"<<ent;
        }
    }
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
