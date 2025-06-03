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


bool isPrime(long n)
{
    if(n == 2)
    {
        return true;
    }

    for (long i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}


void passion()
{
    long n;
    cin >> n;

    if(n % 2 == 0)
    {
        cout << n / 2 << " " << n / 2;
        nl
        return;
    }
    if(isPrime(n))
    {
        cout << 1 << " " << n - 1;
        nl
        return;
    }

    for(long i = 2; i <= 100000; i++)
    {
        if(n % i == 0)
        {
            cout << (n / i) << " " << (n - (n / i));
            nl
            return;
        }
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
