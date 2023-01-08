///Way Too Long Words

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

    int t;
    cin >> t;

    while(t--)
    {
        string word;
        cin >> word;

        int len = word.size();
        int mid = (len - 2);

        for(int i = 0; i < len; i++)
        {
            if(len > 10)
            {
                cout << word[0] << mid << word[len - 1];
                cout << endl;
                break;
            }
            else
            {
                cout << word;
                cout << endl;
                break;
            }
        }

    }

    return 0;
}

