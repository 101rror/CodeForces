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
    long k, l1, r1, l2, r2;
    cin >> k >> l1 >> r1 >> l2 >> r2;

    set<long> st;
    long power = 1;

    while (power <= r2)
    {
        st.insert(power);
        if (power > r2 / k)
        {
            break;
        }
        power *= k;
    }

    long count = 0;

    for (long p : st)
    {
        long start = max(l1, (l2 + p - 1) / p);
        long end = min(r1, r2 / p);

        if (start <= end)
        {
            count += (end - start + 1);
        }
    }

    cout << count;
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
