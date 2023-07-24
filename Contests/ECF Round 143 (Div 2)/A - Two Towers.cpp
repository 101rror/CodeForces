///Two Towers

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

#define  YES   cout << "YES";
#define  NO    cout << "NO";
#define  Yes   cout << "Yes";
#define  No    cout << "No";
#define  one   cout << "-1";
#define  nl    cout << endl;

#define  signed  int32_t
#define  int  long long
#define  fi  first
#define  se  second
#define  vc  vector<char>
#define  vi  vector<int>
#define  pb  push_back
#define  pop  pop_back
#define  sc  set<char>
#define  si  set<int>



void solve()
{
    int n, m;
    cin >> n >> m;

    string s1, s2;
    cin >> s1 >> s2;

    int count = 0;
    int count1 = 0;

    for(int i = 1; i < n; i++)
    {
        if(s1[i] == s1[i - 1])
        {
            count++;
        }
    }
    for(int i = 1; i < m; i++)
    {
        if(s2[i] == s2[i - 1])
        {
            count1++;
        }
    }
    if((count > 1 or count1 > 1) or (count == 1 and count1 == 1))
    {
        NO
        nl
    }
    else if((count == 1 or count1 == 1) and (s1[n - 1] == s2[m - 1]))
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



signed main()
{
    FastRead();
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        solve();
    }

    return 0;
}
