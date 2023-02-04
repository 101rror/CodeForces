///Flip Flop Sum

/**
*
*   author :: 101rror
*
**/

#include <bits/stdc++.h>

using namespace std;

const long long N = 2e5+5, M =1e9+7, OO = 0x3f3f3f3, mod=1e7+7;
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


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    fastread();

    int t;
    cin >> t;

    int array[N];

    while(t--)
    {
        int n;
        cin >> n;

        int sum = 0;
        int Max = -2;

        for (int i = 0; i <n; ++i)
        {
            cin >> array[i];
            sum += array[i];
        }
        for (int i = 0; i < n-1; ++i)
        {
            Max = max(Max, -array[i] + (-array[i+1]));
        }
        cout << (sum + (Max * 2));
        nl

    }

    return 0;
}



