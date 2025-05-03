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

    vector<long>a(n), preSum(n + 1), preMax(n + 1);

    for(auto &it : a)
    {
        cin >> it;
    }

    for(int i = 0; i < n; i++)
    {
        preMax[i + 1] = max(preMax[i], a[i]);
        preSum[i + 1] = preSum[i] + a[i];
    }

    for(int i = 1; i <= n; i++)
    {
        cout << preMax[n - i + 1] + preSum[n] - preSum[n - i + 1] << " ";
    }
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
