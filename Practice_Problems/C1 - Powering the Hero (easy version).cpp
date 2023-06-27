///Powering the Hero (easy version)

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
#define  ll  long long
#define  fi  first
#define  se  second
#define  vc  vector<char>
#define  vi  vector<long long>
#define  pb  push_back
#define  sc  set<char>
#define  si  set<int>



void solve()
{
    ll n;
    cin >> n;

    vi v(n);

    for(ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    priority_queue<int>pq;

    ll ans = 0;

    for(ll i = 0; i < n; i++)
    {
        if(v[i] == 0)
        {
            if(!pq.empty())
            {
                ans += pq.top();
                pq.pop();
            }
        }
        else
        {
            pq.push(v[i]);
        }
    }

    cout << ans;
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
