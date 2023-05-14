///

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
    int a, b, c;
    cin >> a >> b >> c;

    vi vec(6);

    vec[0] = (a + b + c);
    vec[1] = ((a + b) * c);
    vec[2] = (a + (b * c));
    vec[3] = (a * b * c);
    vec[4] = (a * (b + c));
    vec[5] = ((a * b) + c);

    int ans = *max_element(vec.begin(), vec.end());

    cout << ans;
    nl
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
