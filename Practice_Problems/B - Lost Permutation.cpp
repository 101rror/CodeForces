///Lost Permutation

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
    int m, s;
    cin >> m >> s;

    int array[m];

    int mx = 0;
    int sum = 0;

    map<int,int>mp;

    for(int i = 0; i < m; i++)
    {
        cin >> array[i];

        mp[array[i]]++;

        mx = max(mx, array[i]);
    }

    for(int i = 0; i < mx; i++)
    {
        if(!mp[i])sum += i;
    }
    int i = mx + 1;

    while(sum < s)
    {
        sum += i;
        i++;
    }

    if(sum == s)
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
