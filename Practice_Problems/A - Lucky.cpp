///Lucky?

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

#define  YES      cout << "YES";
#define  NO       cout << "NO";
#define  Yes      cout << "Yes";
#define  No       cout << "No";
#define  one      cout << "-1";
#define  nl       cout << "\n";

#define  srt(s)   sort(s.begin(),s.end())
#define  rsrt(s)  sort(s.rbegin(),s.rend())

#define  signed   int32_t
#define  long     long long
#define  fi       first
#define  se       second
#define  pb       push_back
#define  pp       pop_back



void passion()
{
    string s;
    cin >> s;

    int sum1 = 0;
    int sum2 = 0;

    for(int i = 0; i < 3; i++)
    {
        sum1 += s[i];
    }

    for(int i = 3; i < 6; i++)
    {
        sum2 += s[i];
    }

    if(sum1 == sum2)
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

    return 0;
}