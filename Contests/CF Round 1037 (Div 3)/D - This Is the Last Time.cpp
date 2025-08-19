
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


struct Casino
{
    long l, r, real;
};

void solution()
{
    long n, k;
    cin >> n >> k;

    vector<Casino> casinos(n);

    for(long i = 0; i < n; i++)
    {
        cin >> casinos[i].l >> casinos[i].r >> casinos[i].real;
    }

    sort(casinos.begin(), casinos.end(), [](const Casino &a, const Casino &b)
    {
        return a.l < b.l;
    });

    priority_queue<long> pq;
    long i = 0;

    while (true)
    {
        while (i < n && casinos[i].l <= k)
        {
            if (casinos[i].r >= k)
            {
                pq.push(casinos[i].real);
            }
            i++;
        }

        if (pq.empty())
        {
            break;
        }

        long best = pq.top();
        pq.pop();

        if (best <= k)
        {
            break;
        }

        k = best;
    }

    cout << k;
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
 
