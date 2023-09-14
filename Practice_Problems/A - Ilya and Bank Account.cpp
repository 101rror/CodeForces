///Ilya and Bank Account

/**
*
*   author :: 101rror
*
**/

#include <bits/stdc++.h>

using namespace std;


const int N = 1e6+10;
#define MAX 1000000                                     //101rror
#define FastRead() (ios_base:: sync_with_stdio(false),cin.tie(0))
#define SuccessfullyExecuted return 0;

#define  YES      cout << "YES";
#define  NO       cout << "NO";
#define  Yes      cout << "Yes";
#define  No       cout << "No";
#define  one      cout << "-1";
#define  nl       cout << "\n";

#define  srt(s)   sort(s.begin(),s.end());
#define  rsrt(s)  sort(s.rbegin(),s.rend());

#define  signed   int32_t
#define  long     long long
#define  fi       first
#define  se       second
#define  pb       push_back
#define  pp       pop_back



void passion()
{
    int n;
    cin >> n;
    bool flag = false;

    if(n >= 0)
    {
        cout << n;
        nl
        return;
    }

    /*if(n == (-10))
    {
        cout << "0";
        nl
        return;
    }*/

    if(n < 0)
    {
        int rem = n % 10;
        int last = rem;
        int ldet = n /= 10;
        int sldet = ldet - (ldet % 10) + rem;

        int x1 = ldet;
        int x2 = sldet;

        if(x1 > x2)
        {
            cout << x1;
        }
        else
        {
            cout << x2;
        }
        return;
    }
}



int main()
{
    FastRead();
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);


    passion();


    SuccessfullyExecuted
}
