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


string l, r;
long n;
long dp[20][2][2];


long dfs(long pos, long bl, long sr)
{
    if (pos == n)
    {
        return 0;
    }
    long &res = dp[pos][bl][sr];
    if (res != -1)
    {
        return res;
    }

    res = INT_MAX;
    long low = l[pos] - '0';
    long high = r[pos] - '0';

    long start = bl ? 0 : low;
    long end = sr ? 9 : high;

    for (long digit = start; digit <= end; digit++)
    {
        long cost = 0;
        if (digit == low)
        {
            cost++;
        }
        if (digit == high)
        {
            cost++;
        }

        long nb = bl || (digit > low);
        long ns = sr || (digit < high);

        res = min(res, cost + dfs(pos + 1, nb, ns));
    }

    return res;
}


void solution()
{
    cin >> l >> r;
    n = (long)l.size();
    memset(dp, -1, sizeof(dp));

    cout << dfs(0, 0, 0);
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
