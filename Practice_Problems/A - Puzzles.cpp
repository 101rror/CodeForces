///Puzzles

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
#define SuccessfullyExecuted return 0;

#define  YES      cout << "YES";
#define  NO       cout << "NO";
#define  Yes      cout << "Yes";
#define  No       cout << "No";
#define  one      cout << "-1";
#define  nl       cout << "\n";

#define  srt(s)   sort(s.begin(),s.end());
#define  rsrt(s)  sort(s.rbegin(),s.rend());

#define  signed   int32_t
#define  long     long long
#define  fi       first
#define  se       second
#define  pb       push_back
#define  pp       pop_back



void passion()
{
    long n, m;
    cin >> n >> m;
    bool flag = false;

    vector<long> s;

    for(int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        s.pb(x);
    }

    srt(s)

    int mn = s[m - 1];

    int y = (m - n);

    for(int i = 0; i <= y; i++)
    {
        int check = s[i + n - 1] - s[i];

        if(mn > check)
        {
            mn = check;
        }
    }

    cout << mn;
    nl

    //int sz = s.size()- 1;
    //int ans = (s[0] - s[sz]);

    /*for(auto c:s1)
    {
        cout << c << " ";
    }*/
}



int main()
{
    FastRead();
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);


    passion();


    SuccessfullyExecuted
}
