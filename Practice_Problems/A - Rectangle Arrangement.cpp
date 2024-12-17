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
    int n;
    cin >> n;

    int maxh = 0, maxw = 0;

    for(int i = 0; i < n; i++)
    {
        int h, w;
        cin >> h >> w;

        maxh = max(maxh, h);
        maxw = max(maxw, w);
    }

    cout << (maxw + maxh) * 2;
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

    //passion();


    Executed
}
