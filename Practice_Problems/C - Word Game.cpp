///Word Game

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

    string p[3][n];

    map<string, int>mp;

    for(int i = 0; i < 3; i++)
    {
        int j = 0;
        while(j < n)
        {
            cin >> p[i][j];

            mp[p[i][j]]++;
            j++;
        }
    }

    string per;

    for(int i = 0; i < 3; i++)
    {
        int count = 0;
        int j = 0;
        while(j < n)
        {
            per = p[i][j];

            if(mp[per] == 2)
            {
                count += 1;
            }
            else if(mp[per] == 1)
            {
                count += 3;
            }
            j++;
        }
        cout << count << " ";
    }
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

    return 0;
}
