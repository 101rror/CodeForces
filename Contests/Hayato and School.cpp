///Hayato and School

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
#define YES             cout << "YES";
#define NO              cout << "NO";
#define Yes             cout << "Yes";
#define No              cout << "No";
#define OK              cout << "OK";
#define ERROR           cout << "ERROR";
#define Ok              cout << "Ok";
#define Error           cout << "Error";
#define nl              cout << endl;
#define spa             cout << " ";

#define fi first
#define se second
#define ll long long
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

    int array[n];

    vi even, odd;

    for(int i = 0; i < n; i++)
    {
        cin >> array[i];

        if(array[i] % 2 == 0)
        {
            even.pb(i + 1);
        }
        else
        {
            odd.pb(i + 1);
        }
    }

    int len1 = even.size();
    int len2 = odd.size();

    if(len1 == n)
    {
        NO
        nl
    }
    else if(len1 < 2 and len2 < 3)
    {
        NO
        nl
    }

    else
    {
        YES
        nl

        if(len1 < 2)
        {
            cout << odd[0] << " " << odd[1] << " " << odd[2] << endl;
        }
        else
        {
            cout << even[0] << " " << even[1] << " " << odd[0] << endl;
        }
    }
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    fastread();

    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }

    return 0;
}
