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
    int m, a, b, c;
    cin >> m >> a >> b >> c;

    int seat1 = min(m, a);
    int seat2 = min(m, b);

    int r1 = m - seat1;
    int r2 = m - seat2;
    int x = r1 + r2;

    int check = min(c, x);

    int monkey = seat1 + seat2 + check;


    cout << monkey;
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
