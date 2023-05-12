///Thermostat

/**
*
*   author :: 101rror
*
**/

#include <bits/stdc++.h>

using namespace std;

const int N = 1e6+10;
#define MAX 1000000
#define infinity 1000000000000000LL                             //101rror
#define fastRead() (ios_base:: sync_with_stdio(false),cin.tie(0))

#define YES   cout << "YES";
#define NO    cout << "NO";
#define Yes   cout << "Yes";
#define No    cout << "No";
#define one   cout << "-1";
#define nl    cout << endl;

#define int32_t signed
#define int long long
#define fi first
#define se second
#define vc vector<char>
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define pop pop_back
#define sc set<char>
#define si set<int>
#define sll set<ll>
#define sin st.insert
#define scl(st) st.clear()
#define eb emplace_back
#define all(x) (x).begin(),(x).end()

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif



void solve()
{
    int l, r, x, a, b;
    cin >> l >> r >> x >> a >> b;

    if(a == b)
    {
        cout << "0";
        nl
    }
    else if(a < b)
    {
        if(b - a >= x)
        {
            cout << "1";
            nl
        }
        else if(r - b >= x or a - l >= x)
        {
            cout << "2";
            nl
        }
        else if(r - a >= x and b - l >= x)
        {
            cout << "3";
            nl
        }
        else
        {
            one
            nl
        }
    }
    else
    {
        if(a - b >= x)
        {
            cout << "1";
            nl
        }
        else if(b - l >= x or r - a >= x)
        {
            cout << "2";
            nl
        }
        else if(a - l >= x and r - b >= x)
        {
            cout << "3";
            nl
        }
        else
        {
            one
            nl
        }
    }
}



signed main()
{
    fastRead();
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        solve();
    }

    return 0;
}
