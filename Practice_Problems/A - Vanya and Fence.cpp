///Vanya and Fence

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
    int n, h;
    cin >> n >> h;

    int array[n];
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> array[i];

        if(array[i] <= h)
        {
            count1++;
        }
        else
        {
            if(array[i] % h == 0)
            {
                count2 += (array[i] / h);
            }
            else
            {
                count3 += (array[i] / h) + 1;
            }
        }
    }

    int ans = (count1 + count2 + count3);

    cout << ans;
    cout << endl;
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
