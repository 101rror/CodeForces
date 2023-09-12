///Boredom

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

#define z 100005
map<long, long>mp1;
map<long, long>mp2;


void passion()
{
    long n;
    cin >> n;

    long s;

    for(int i = 0; i < n; i++)
    {
        cin >> s;
        mp1[s]++;
    }

    mp2[0] = 0;
    mp2[1] = mp1[1];

    for(int i = 2; i <= z; i++)
    {
        mp2[i] = max(mp2[i - 1], mp2[i - 2] + i * mp1[i]);
    }

    cout << mp2[z];
}



int main()
{
    FastRead();
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);


    passion();

    return 0;
}
