///There is none worthy of worship except ALLAH and Muhammad(SWT) is the messenger of ALLAH.

/**
*
*   author :: 101rror
*
**/

#include <bits/stdc++.h>

using namespace std;

#define  FastRead  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  Executed  return 0;
#define  nl        cout << "\n";

#define  srt(s)    sort(s.begin(), s.end());
#define  rsrt(s)   sort(s.rbegin(), s.rend());
#define  rvs(s)    reverse(s.begin(), s.end());

#define  long      long long
#define  fi        first
#define  se        second
#define  pb        push_back

const int N = 2000001;
const int MOD = 1000000007;

void solution()
{
    long k, a, b, x, y;
    cin >> k >> a >> b >> x >> y;

    long res = 0;

    if (x > y)
    {
        swap(a, b);
        swap(x, y);
    }

    if (k >= a)
    {
        long c1 = (k - a) / x + 1;
        res += c1;
        k -= c1 * x;
    }

    if (k >= b)
    {
        long c2 = (k - b) / y + 1;
        res += c2;
        k -= c2 * y;
    }

    cout << res;
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
