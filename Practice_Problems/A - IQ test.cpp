///IQ test

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

    int array[n];

    int even = 0;
    int evenindex = 0;
    int odd = 0;
    int oddindex = 0;

    for(int i = 1; i <= n; i++)
    {
        cin >> array[i];

        if(array[i] % 2 == 0)
        {
            even++;
            evenindex = i;
        }
        else
        {
            odd++;
            oddindex = i;
        }
    }
    if(odd > even)
    {
        cout << evenindex << endl;
    }
    else
    {
        cout << oddindex << endl;
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
