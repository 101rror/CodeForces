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
    vector<long>a(5);

    for(auto &it : a)
    {
        cin >> it;
    }

    long sum = accumulate(a.begin(), a.end(), 0);

    if(sum % 5 == 0 && sum >= 5)
    {
        cout << sum / 5;
        nl
    }
    else
    {
        cout << "-1";
        nl
    }
}


int32_t main()
{
    FastRead

    solution();

    Executed
}
