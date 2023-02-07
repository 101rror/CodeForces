///Extra-terrestrial Intelligence

/**
*
*   author :: 101rror
*
**/

#include <bits/stdc++.h>

using namespace std;

#define MAX 1000000
#define infinity 1000000000000000LL
#define all(x) (x).begin(),(x).end()
#define FastRead ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod(x,m) ((x%m)+m)%m;                               //101rror
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL))

#define T while(t--)
#define YES             cout << "YES";
#define NO              cout << "NO";
#define Yes             cout << "Yes";
#define No              cout << "No";
#define OK              cout << "OK";
#define ERROR           cout << "ERROR";
#define Ok              cout << "Ok";
#define Error           cout << "Error";
#define nl              cout << endl;


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

    string str;
    cin >> str;

    si st;
    int x = 0;
    bool check = 0;

    for(int i = 0; i < n; i++)
    {
        if(str[i] == '1')
        {
            if(check == 0)
            {
                check = 1;
                x = 0;
            }
            else
            {
                st.insert(x);
                x = 0;
            }
        }
        else
        {
            x++;
        }
    }

    int ans = st.size();

    if(ans == 1)
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
    ios::sync_with_stdio(false);
    cin.tie(0);
    fastread();

    solve();

    return 0;
}
