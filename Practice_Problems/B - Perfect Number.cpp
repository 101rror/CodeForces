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


bool isPerfect(long n)
{
    long sum = 0;
    while(n)
    {
        long rem = n % 10;
        sum += rem;
        n /= 10;
    }

    if(sum == 10)
    {
        return true;
    }

    return false;
}


void solution()
{
    long k;
    cin >> k;

    for(long i = 19; i < 20000000; i++)
    {
        if(k && isPerfect(i))
        {
            k--;
        }
        if(!k && isPerfect(i))
        {
            cout << i;
            nl
            return;
        }
    }
}


int32_t main()
{
    FastRead

    solution();

    Executed
}
