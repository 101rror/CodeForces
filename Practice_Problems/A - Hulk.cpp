///Hulk

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
#define  endl  "\n"

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

    if(n == 1)
    {
        cout << "I hate it";
    }
    else if(n > 1)
    {
        for(int i = 1; i <= n; i++)
        {
            if(i % 2 != 0)
            {
                cout << "I hate that ";

                if(i == n - 1)
                {
                    cout << "I love it ";
                    break;
                }
            }
            else
            {
                cout << "I love that ";

                if(i == n - 1)
                {
                    cout << "I hate it ";
                    break;
                }
            }
        }
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
