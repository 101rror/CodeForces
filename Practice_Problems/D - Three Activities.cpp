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

    vector<pair<long, long>> a(n), b(n), c(n);

    for(long i = 0; i < n; i++)
    {
        long x;
        cin >> x;
        a[i] = {x, i};
    }
    for(long i = 0; i < n; i++)
    {
        long x;
        cin >> x;
        b[i] = {x, i};
    }
    for(long i = 0; i < n; i++)
    {
        long x;
        cin >> x;
        c[i] = {x, i};
    }

    srt(a)
    srt(b)
    srt(c)

    long maxVal = 0;

    for(long i = n - 3; i < n; i++)
    {
        for(long j = n - 3; j < n; j++)
        {
            for(long k = n - 3; k < n; k++)
            {
                if(a[i].se != b[j].se && b[j].se != c[k].se && a[i].se != c[k].se)
                {
                    long sum = a[i].fi + b[j].fi + c[k].fi;
                    maxVal = max(maxVal, sum);
                }
            }
        }
    }

    cout << maxVal;
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
