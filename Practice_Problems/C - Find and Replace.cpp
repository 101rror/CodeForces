///Find and Replace

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

    string s;
    cin >> s;

    bool flag = false;

    int count1 = 0;
    int count2 = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = (i + 1); j < n; j++)
        {
            if(s[i] == s[j])
            {
                int x = (j - i);
                if(x % 2 == 0)
                {
                    count1++;
                }
                count2++;
            }
        }
    }

    if(count1 == count2)
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

    SuccessfullyExecuted
}
