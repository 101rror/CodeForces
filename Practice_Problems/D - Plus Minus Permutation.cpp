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



long lcm(long a, long b)
{
    return (a / __gcd(a, b)) * b;
}


void passion()
{
    long n, x, y;
    cin >> n >> x >> y ;

    if(x == y)
    {
        cout << 0;
        nl
        return;
    }

    long com  = n / lcm(x, y);
    long xl = (n / x) - com;
    long yl = (n / y) - com;
    long sm = n / x;

    long ymin = (yl * (yl + 1)) / 2;
    long xmax = ((n * (n + 1)) / 2) - (((n - xl) * (n - xl + 1)) / 2);
    long same = ((sm * (sm + 1)) / 2) - ymin;
    ymin += same;
    xmax += same;

    cout << xmax - ymin;
    nl
}


int32_t main()
{
    FastRead


    long efforts;
    cin >> efforts;

    while (efforts--)
    {
        passion();
    }


    Executed
}
