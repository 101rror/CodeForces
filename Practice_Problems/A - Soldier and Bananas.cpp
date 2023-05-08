///Soldier and Bananas

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

#define fi first
#define se second
#define vc vector<char>vec
#define vi vector<int>vec
#define vll vector<ll>vec
#define pb push_back
#define pop pop_back
#define sc set<char>st
#define si set<int>st
#define sll set<ll>st
#define sin st.insert
#define cl(st) st.clear()
#define eb emplace_back
#define all(x) (x).begin(),(x).end()

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    fastread();

    int k, n, w;
    cin >> k >> n >> w;

    int sum = 0;

    for(int i = 1; i <= w; i++)
    {
        sum += (i * k);
    }

    if(sum > n)
    {
        cout << (sum - n);
        nl
    }
    else
    {
        cout << 0;
        nl
    }


    return 0;
}
