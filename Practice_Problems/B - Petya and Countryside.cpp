///Petya and Countryside

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

    vi vec(n);

    for(int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    int ans = 0;
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        count = 0;

        if(i == 0)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(vec[j] <= vec[j - 1])
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            if(ans < count + 1)
            {
                ans = count + 1;
            }
            count = 0;
        }

        else if(i == n - 1)
        {
            for(int j = i - 1; j >= 0; j--)
            {
                if(vec[j] <= vec[j + 1])
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            if(ans < count + 1)
            {
                ans = count + 1;
            }
            count = 0;
        }
        else
        {
            for(int j = i + 1; j < n; j++)
            {
                if(vec[j] <= vec[j - 1])
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            for(int j = i - 1; j >= 0; j--)
            {
                if(vec[j] <= vec[j + 1])
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            if(ans < count + 1)
            {
                ans = count + 1;
            }
        }

    }

    cout << ans << endl;

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
