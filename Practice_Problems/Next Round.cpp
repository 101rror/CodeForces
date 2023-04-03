///Next Round

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

#define T while(t--)
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

    int n, k;
    cin >> n >> k;

    int array[n];
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for(int i = 0; i < n; i++)
    {
        if(array[i] >= array[k - 1] && array[i] != 0)
        {
            count++;
        }
    }
    cout << count;
    cout << endl;

    return 0;
}

