///A Good Contest

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
#define  nl    cout << "\n";

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
    int n;
    cin >> n;

    string name;

    vi before(n);
    vi after(n);

    for(int i = 0; i < n; i++)
    {
        cin >> name >> before[i] >> after[i];
    }

    bool flag = false;

    for(int i = 0; i < n; i++)
    {
        if (before[i] >= 2400)
        {
            if(before[i] < after[i])
            {
                flag = true;
                break;
            }
        }
    }

    if(flag)
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



signed main()
{
    FastRead();
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    //int testCase;
    //cin >> testCase;

    //while(testCase--)
    //{
    solve();
    //}

    return 0;
}
