///Colourblindness

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
    long n;
    cin >> n;

    string row1;
    string row2;

    cin >> row1;
    cin >> row2;

    bool flag = false;

    for(int i = 0; i < n; i++)
    {
        if((row1[i] == 'R' and row2[i] == 'B') or (row1[i] == 'R' and row2[i] == 'G') or (row1[i] == 'B' and row2[i] == 'R') or (row1[i] == 'G' and row2[i] == 'R'))
        {
            flag = true;
        }
    }


    if(flag)
    {
        NO
        nl
    }
    else
    {
        YES
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
