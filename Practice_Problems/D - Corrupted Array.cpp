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
    long n;
    cin >> n;

    vector<long>b(n + 2), preSum(n + 3, 0);

    for(auto &it : b)
    {
        cin >> it;
    }

    srt(b)

    for(long i = 1; i < n + 3; i++)
    {
        preSum[i] = preSum[i - 1] + b[i - 1];
    }

    preSum.erase(preSum.begin());

    long n1 = preSum[n - 1], last1 = preSum[n], it;

    if(n1 == b[n])
    {
        for(long i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        nl
        return;
    }

    bool done = false;

    for(long i = 0; i < n + 1; i++)
    {
        last1 -= b[i];

        if (last1 == b[n + 1])
        {
            done = true;
            it = i;
            break;
        }

        last1 += b[i];
    }

    if(done)
    {
        for(long i = 0; i <= n; i++)
        {
            if(i != it)
            {
                cout << b[i] << " ";
            }
        }
    }
    else
    {
        cout << "-1";
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
