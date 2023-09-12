///Everyone Loves to Sleep

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
    int n, H, M;
    cin >> n;
    cin >> H >> M;

    int t1 = (H * 60) + M;
    int t2 = 1440;

    vector<long>s(n);

    while(n--)
    {
        int Hour, Min;
        cin >> Hour >> Min;

        int x = (Hour * 60) + Min;

        int check = (x - t1);
        if(check < 0)
        {
            check += 1440;
        }
        t2 = min(t2, check);
    }

    int ans1 = (t2 / 60);
    int ans2 = (t2 % 60);

    cout << ans1 << " " << ans2;
    nl
}



int main()
{
    FastRead();
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    long testCase;
    cin >> testCase;

    while(testCase--)
    {
        passion();
    }

    return 0;
}
