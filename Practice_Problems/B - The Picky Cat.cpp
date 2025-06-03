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
    int n;
    cin >> n;

    vector<int>a(n), b;

    for(auto &it : a)
    {
        cin >> it;
        b.pb(abs(it));
    }

    long first = b[0], x = 0, mid = 0;
    srt(b)

    if(n % 2 == 0)
    {
        mid = ((n - 1) / 2) + 1;
    }
    else
    {
        mid = ((n - 1) / 2);
    }

    for(long i = 0; i < n; i++)
    {
        if(b[i] == first)
        {
            x = i;
            break;
        }
    }

    if(x <= mid)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    nl
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
