///Hall of Fame

/**
*
*   author :: 101rror
*
**/

#include <bits/stdc++.h>

using namespace std;

#define MAX 100
#define infinity 1000000000000000LL
#define all(x) (x).begin(),(x).end()
#define FastRead ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod(x,m) ((x%m)+m)%m;                               //101rror
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL))

#define T while(t--)
#define for2(i,a,b) for(i=a;i>=b;i--)
#define for3(i,a,b) for(i=a;i<=b;i=i+2)
#define for1(i,a,b) for(i=a;i<=b;i=i+1)
#define for4(i,a,b) for(i=a;i>=b;i=i-2)

#define fi first
#define se second
#define pb push_back
#define eb emplace_back

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif


void solve()
{
    long long n = 0;
    cin >> n;

    string s;
    cin >> s;

    for(int i = 0; i < n; i++)
    {
        if(s.substr(i, 2) == "RL")
        {
            cout << "0";
            cout << endl;
            return;
        }
        if(s.substr(i, 2) == "LR")
        {
            cout << (i + 1);
            cout << endl;
            return;
        }
    }
    cout << "-1";
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long t;
    cin >> t;

    while(t--)
    {
        solve();
    }

    return 0;
}
