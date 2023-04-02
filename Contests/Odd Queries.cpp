///Odd Queries

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

int sum[N];


void passion()
{
    int n, q;
    cin >> n >> q;

    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        sum[i] = sum[i - 1] + x;
    }

    while(q--)
    {
        int l, r, k;
        cin >> l >> r >> k;

        int x1 = sum[r] - sum[l - 1];
        int x2 = sum[n];
        int range1 = (r - l + 1) * k;
        int range2= x2 - x1 + range1;

        if(range2 & 1)//(range2 % 2 != 0)//(range2 % 2)
        {
            YES
            nl
        }
        else
        {
            NO
            nl
        }
    }
}



int main()
{
    FastRead();
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        passion();
    }

    SuccessfullyExecuted
}
