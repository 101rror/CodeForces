
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


long cntBad(long n, const vector<long>& primes)
{
    long res = 0;
    long m = primes.size();

    for (long mask = 1; mask < (1 << m); mask++)
    {
        long lcm = 1;
        long bits = 0;

        for (long i = 0; i < m; i++)
        {
            if (mask & (1 << i))
            {
                bits++;
                lcm = lcm / __gcd(lcm, 1LL * primes[i]) * primes[i];
                if (lcm > n)
                {
                    break;
                }
            }
        }

        if (lcm > n)
        {
            continue;
        }

        long count = n / lcm;

        if (bits % 2 == 1)
        {
             res += count;
        }
        else
        {
            res -= count;
        }
    }

    return res;
}


long cntGood(long l, long r)
{
    vector<long> primes = {2, 3, 5, 7};
    long total = r - l + 1;
    long bad = cntBad(r, primes) - cntBad(l - 1, primes);

    return total - bad;
}


void solution()
{
    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        long l, r;
        cin >> l >> r;
        cout << cntGood(l, r) << "\n";
    }
}

int32_t main()
{
    FastRead

    solution();

    Executed
}
