///MKnez's ConstructiveForces Task

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
    int n;
    cin >> n;

    if(n % 2 != 0)
    {
        if(n == 3)
        {
            NO
            nl
        }
        else
        {
            YES
            nl

            int temp = n / 2;
            for(int i = 1; i <= n; i++)
            {
                if(i % 2 != 0)
                {
                    cout << temp - 1 << " ";
                }
                else
                {
                    cout << -temp << " ";
                }
            }
            nl
        }
    }
    else
    {
        YES
        nl
        for(int i = 1; i <= n; i++)
        {
            if(i % 2 != 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "-1 ";
            }
        }
        nl
    }
}



signed main()
{
    fastRead();
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int testCase = 1;
    cin >> testCase;

    while(testCase--)
    {
        solve();
    }

    return 0;
}
