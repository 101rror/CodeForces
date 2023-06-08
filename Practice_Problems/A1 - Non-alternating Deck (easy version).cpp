///Non-alternating Deck (easy version)

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

pair<int, int> ans[N];

void solve()
{
    int n;
    cin >> n;

    int count1 = 1;
    int count2 = 0;

    ans[1] = {1, 0};
    int c = 1;
    int t = 1;
    int flag = 0;

    for(int i = 2; ;i++)
    {
        c += 4;
        int d = c;

        while(t <= N and d--)
        {
            t++;
            if(!flag)
            {
                count2++;
            }
            else
            {
                count1++;
            }

            ans[t] = {count1, count2};
        }
        flag ^= 1;

        if(t >= N)
        {
            break;
        }
    }

    cout << ans[n].first << " " << ans[n].second;
    cout << endl;
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
