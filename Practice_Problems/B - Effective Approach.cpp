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


void solution()
{
    long n, m;
    cin >> n;

    map<long, long>mp;

    for(long i = 1; i <= n; i++)
    {
        long it;
        cin >> it;
        mp[it] = i;
    }

    long countV = 0, countP = 0;
    cin >> m;
    for(long i = 0; i < m; i++)
    {
        long it;
        cin >> it;
        countV += mp[it];
        countP += n - mp[it] + 1;
    }

    cout << countV << " " << countP;
    nl
}


int32_t main()
{
    FastRead

    solution();

    Executed
}
