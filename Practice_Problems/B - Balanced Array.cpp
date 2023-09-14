///Balanced Array

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
    long n;
    cin >> n;

    vector<long>even;
    vector<long>odd;

    if(n % 4 != 0)
    {
        NO
        nl
    }
    else
    {
        YES
        nl

        long sum1 = 0;
        long sum2 = 0;

        for(int i = 1; i <= n; i++)
        {
            if(i % 2 == 0)
            {
                even.pb(i);
                sum1 += i;
            }
            else
            {
                odd.pb(i);
                sum2 += i;
            }
        }

        int s = odd.size();
        int s1 = even.size();

        if(sum1 == sum2)
        {
            for(auto x : even)
            {
                cout << x << " ";
            }
            for(auto x : odd)
            {
                cout << x << " ";
            }
            nl
        }
        else
        {
            for(auto x : even)
            {
                cout << x << " ";
            }
            for(int i = 0; i < s - 1; i++)
            {
                cout << odd[i] << " ";
            }
            cout << 3 * n / 2 - 1;
            nl
        }
    }

}



int main()
{
    FastRead();
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    long testCase;
    cin >> testCase;

    while(testCase--)
    {
        passion();
    }

    SuccessfullyExecuted
}
