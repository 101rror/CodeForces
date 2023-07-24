///Count the Number of Pairs

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
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    map<char, int>mp1, mp2;

    int count = 0;

    for(auto i : s)
    {
        if(isupper(i))
        {
            mp1[i]++;
        }
        else
        {
            mp2[i]++;
        }
    }

    for(auto i : mp1)
    {
        char s1 = tolower(i.first);

        while((mp2.find(s1) != mp2.end()) and (mp2[s1] > 0 and mp1[i.first] > 0))
        {
            count++;
            mp2[s1]--;
            mp1[i.first]--;
        }
        while(mp1[i.first] >= 2 and k > 0)
        {
            k--;
            count++;
            mp1[i.first] -= 2;
        }
    }
    for(auto i : mp2)
    {
        while(mp2[i.first] >= 2 and k > 0)
        {
            k--;
            count++;
            mp2[i.first] -= 2;
        }
    }

    cout << count;
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
