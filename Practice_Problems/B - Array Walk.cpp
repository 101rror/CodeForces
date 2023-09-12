///Array Walk

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
    int n, k, z;
    cin >> n >> k >> z;

    vector<int>s(n + 1);
    vector<int>sum(n + 1);


    for(int i = 1; i <= n; i++)
    {
        cin >> s[i];

        sum[i] = s[i] + sum[i - 1];
    }

    int ans = sum[++k];

    for(int i = 1; i < k; i++)
    {
        for(int j = 1; j <= z; j++)
        {
            int x = (k - j * 2);

            if(x < i)
            {
                continue;
            }
            int res = sum[x] + j * (s[i] + s[i + 1]);

            ans = max(ans, res);
        }
    }

    cout << ans;
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
