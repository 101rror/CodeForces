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
    long n, k;
    cin >> n >> k;

    vector<long>a(n), b(n);

    for (auto &it : a)
    {
        cin >> it;
    }
    for (auto &it : b)
    {
        cin >> it;
    }

    long count = 0;

    long x = -1;
    for (long i = 0; i < n; i++)
    {
        if (b[i] != -1)
        {
            long sum = a[i] + b[i];

            if(x == -1)
            {
                x = sum;
            }
            else
            {
                if (x != sum)
                {
                    cout << 0;
                    nl
                    return;
                }
            }
        }
    }

    if (x == -1)
    {
        long mx = *max_element(a.begin(), a.end());
        long mn = *min_element(a.begin(), a.end());
        long dif = mx - mn;
        cout << k - dif + 1;
        nl
        return;
    }

    for(long i = 0; i < n; i++)
    {
        if(a[i] > x || x - a[i] > k)
        {
            cout << 0;
            nl
            return;
        }
    }

    cout << 1;
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
