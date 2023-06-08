///Sereja and Dima

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
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int first = 0;
    int last = n - 1;
    int s = 0;
    int d = 0;
    int count = 0;

    while(first <= last)
    {
        if(count % 2 == 0)
        {
            if(array[first] > array[last])
            {
                s += array[first];
                first++;
            }
            else
            {
                s += array[last];
                last--;
            }
        }
        else
        {
            if(array[first] > array[last])
            {
                d += array[first];
                first++;
            }
            else
            {
                d += array[last];
                last--;
            }
        }

        count++;
    }

    cout << s << " " << d;
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
