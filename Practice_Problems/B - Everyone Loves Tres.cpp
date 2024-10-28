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
#define  nl        printf("\n");

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

    if (n == 1 || n == 3)
    {
        cout << -1 << "\n";
    }
    else if(n == 2)
    {
        cout << "66\n";
    }
    else
    {
        if(n % 2 == 0)
        {
            for(int i = 1; i <= n - 2; i += 2)
            {
                cout << "33";
            }
            cout << "66\n";
        }
        else
        {
            n -= 3;
            for(int i = 1; i <= n - 2; i += 2)
            {
                cout << "33";
            }
            cout << "36366";
            cout << "\n";
        }
    }
}


int32_t main()
{
    FastRead

    int efforts;
    cin >> efforts;

    while(efforts--)
    {
        passion();
    }

    //passion();


    Executed
}
