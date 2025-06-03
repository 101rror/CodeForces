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

    string s;
    cin >> s;

    long zero = count(s.begin(), s.end(), '0');
    long one = n - zero;
    long mn = min(zero, one);
    long x = (n / 2) - k;
    long x0 = (zero - x);
    long x1 = (one - x);

    if(mn < x)
    {
        cout << "NO";
        nl
    }
    else if((x0 % 2 == 0) && (x1 % 2 == 0))
    {
        cout << "YES";
        nl
    }
    else
    {
        cout << "NO";
        nl
    }
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
