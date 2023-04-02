///Subsequence Addition (Hard Version)

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
    bool flag = false;

    vector<long>s(n);

    for(int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    srt(s)

    long ans = 1;

    if(s[0] != 1)
    {
        NO
        nl
        return;
    }

    for(int i = 1; i < n; i++)
    {
        if(s[i] <= ans)
        {
            ans += s[i];
            continue;
        }
        else
        {
            NO
            nl
            return;
        }
    }

    YES
    nl
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
