///Matrix Rotation

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
    vi mat;

    for(int i = 0; i < 4; i++)
    {
        int arr;
        cin >> arr;

        mat.pb(arr);
    }
    swap(mat[2], mat[3]);

    bool check = false;

    for(int i = 0; i < 4; i++)
    {
        rotate(mat.begin(), prev(mat.end()), mat.end());
        if((mat[0] < mat[1]) && (mat[0] < mat[3]) && (mat[1] < mat[2]) && (mat[3] < mat[2]))
        {
            check = true;
            break;
        }
    }
    if(check == true)
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
