///Codeforces Subsequences

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

#define  srt(s)   sort(s.begin(),s.end())
#define  rsrt(s)  sort(s.rbegin(),s.rend())

#define  signed   int32_t
#define  long     long long
#define  fi       first
#define  se       second
#define  pb       push_back
#define  pp       pop_back



void passion()
{
    long k;
    cin >> k;

    string s = "codeforces";
    string x = "s";

    int n = s.size();

    if(k == 1)
    {
        cout << s;
        nl
    }
    else if(k <= 3)
    {
        for(int i = 0; i < k - 1; i++)
        {
            s += x;
        }

        cout << s;
        nl
    }
    else
    {
        map<long, long> mp;

        for(int i = 0; i < n; i++)
        {
            mp[i] = 1;
        }

        long count = 1;

        while(count < k)
        {
            int i = 0;
            while(i < n)
            {
                count /= mp[i];
                mp[i]++;
                count *= mp[i];

                if(count >= k)
                {
                    break;
                }
                i++;
            }
        }

        int i = 0;
        while(i < n)
        {
            int j = 0;

            while(j < mp[i])
            {
                cout << s[i];
                j++;
            }
            i++;
        }
        nl
    }
}



int main()
{
    FastRead();
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);


    passion();


    return 0;
}
