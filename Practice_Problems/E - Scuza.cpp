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
    int n, q;
    cin >> n >> q;

    vector<long>a(n + 1), preSum(n + 1);

    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        preSum[i] = preSum[i - 1] + a[i];
        a[i] = max(a[i], a[i - 1]);
    }

    while(q--)
    {
        long it;
        cin >> it;

        if(it == 0)
        {
            cout << it << " ";
        }
        else
        {
            long idx = upper_bound(a.begin(), a.end(), it) - a.begin();
            cout << preSum[idx - 1] << " ";
        }
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
