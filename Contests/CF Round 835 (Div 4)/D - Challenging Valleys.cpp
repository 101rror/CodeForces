///Challenging Valleys

/**
*
*   author :: 101rror
*
**/

#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;
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
ll e = 1e9+10;


void solve()
{
    int n;
    cin >> n;

    vi vec;

    int array[n];

    for(int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    vec.pb(e);
    vec.pb(array[0]);

    for(int i = 1; i < n; i++)
    {
        if(array[i] != array[i - 1])
        {
            vec.pb(array[i]);
        }
    }
    vec.pb(e);

    int count = 0;
    int len = vec.size();

    for(int i = 1; i < len - 1; i++)
    {
        if(vec[i] < vec[i - 1] and vec[i] < vec[i + 1])
        {
            count++;
        }
    }

    if(count == 1)
    {
        YES
        nl
    }
    else
    {
        NO
        nl
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
