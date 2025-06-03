
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


long check(long a, long b, long x, long y, long n)
{
    long da = (a - x);

    if (da >= n)
    {
        a -= n;
        return a * b;
    }

    b -= (n - a + x);
    a -= da;

    if (b <= y)
    {
        b = y;
    }

    return a * b;
}


void solution()
{
    long a, b, x, y, n;
    cin >> a >> b >> x >> y >> n;

    long ab = check(a, b, x, y, n);
    long ba = check(b, a, y, x, n);

    long ans = min(ab, ba);

    cout << ans;
    nl
}


int32_t main()
{
    FastRead


    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        solution();
    }


    Executed
}
