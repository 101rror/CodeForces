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
    int n, s;
    cin >> n >> s;

    vector<int>a(n), preSum(n + 1, 0);

    for(auto &it : a)
    {
        cin >> it;
    }

    for(int i = 0; i < n; i++)
    {
        preSum[i + 1] = preSum[i] + a[i];
    }

    if(preSum[n] == s)
    {
        cout << "0";
        nl
        return;
    }
    if(preSum[n] < s)
    {
        cout << "-1";
        nl
        return;
    }

    long ans = INT_MAX;

    for(long i = 0; i < n; i++)
    {
        if(preSum[n] - preSum[i] < s)
        {
            break;
        }

        long check = lower_bound(preSum.begin(), preSum.end(), preSum[i] + s + 1) - preSum.begin();
        check--;

        ans = min(ans, n - check + i);
    }

    cout << ans;
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
