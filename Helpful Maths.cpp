///Helpful Maths

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

    char s[150];
    gets(s);

    int len = strlen(s);

    vector<int>vec;

    for(int i = 0; i < len; i += 2)
    {
        vec.push_back(s[i]);
    }

    sort(vec.begin(), vec.end());

    int len1 = vec.size();
    int len2 = (len1 - 1);

    for(int i = 0; i < len1; i++)
    {
        if(i != len2)
        {
            cout << (vec[i] - 48) << "+";
        }
        else
        {
            cout << (vec[i] - 48);
        }
    }

    return 0;
}
