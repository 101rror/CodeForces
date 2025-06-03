///There is none worthy of worship except ALLAH and Muhammad(SWT) is the messenger of ALLAH.


/**
*
*   author :: 101rror
*
**/

#include<bits/stdc++.h>

using namespace std;

#define  FastRead  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  Executed  return 0;
#define  nl        cout << "\n";

#define  srt(s)    sort(s.begin(),s.end());
#define  rsrt(s)   sort(s.rbegin(),s.rend());
#define  rvs(s)    reverse(s.begin(), s.end());

#define  long      long long
#define  fi        first
#define  se        second
#define  pb        push_back


const int N = 2000001;
const int MOD = 1000000007;
long arr[N];
long brr[N];


void passion()
{
    long x, y, z, count = 0;
    cin >> x >> y >> z;

    if(x < z || y < z)
    {
        cout << min(x, y);
        nl
        return;
    }

    if(!x || !y)
    {
        cout << count;
        nl
        return;
    }

    long a = ( x + y + z);

    if(x <= y)
    {
        if(x * 3 <= a)
        {
            cout << x;
            nl
        }
        else
        {
            cout << a / 3;
            nl
        }
    }
    else
    {
        if(y * 3 <= a)
        {
            cout << y;
            nl
        }
        else
        {
            cout << a / 3;
            nl
        }
    }
}


int32_t main()
{
    FastRead


    int efforts;
    cin >> efforts;

    while (efforts--)
    {
        passion();
    }


    Executed
}
