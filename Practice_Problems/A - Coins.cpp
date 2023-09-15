///Coins

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
    int n, m, k, w;
    cin >> n >> m >> k >> w;

    int arr[n];
    int brr[m];

    int sum1 = 0;
    int sum2 = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];

        sum1 += arr[i];
    }
    for(int i = 0; i < m; i++)
    {
        cin >> brr[i];

        sum2 += brr[i];
    }

    int ans = abs(sum1 - sum2);
    int res = ans / k;

    cout << res;
    nl

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
