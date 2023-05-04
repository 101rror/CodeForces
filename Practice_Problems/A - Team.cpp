///Team

/**
*
*   author :: 101rror
*
**/

#include <bits/stdc++.h>

using namespace std;

#define infinity 1000000000000000LL
#define all(x) (x).begin(),(x).end()
#define FastRead ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod(x,m) ((x%m)+m)%m;                               //101rror
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL))

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


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    int count = 0;

    while(t--)
    {
        int P, V, T;
        cin >> P >> V >> T;

        if(P && V && T == 1 || P && V == 1 || P && T == 1 || V && T == 1)
        {
            count ++;
        }
    }
    cout << count;

    return 0;
}

