///Unlucky Ticket

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
    int n;
    cin >> n;

    string s, s1, s2;

    cin >> s;

    /*int digit;
    cin >> digit;

    vector<string>s;
    vector<string>s1;
    vector<string>s2;

    while(digit != 0)
    {
        int rem = digit % 10;
        for(int i = 0; i < n; i++)
        {
            s[i] = rem;
        }
        digit /= 10;
    }

    reverse(s.begin(), s.end());

    vector<int> s1 (s.begin(), s.begin() + s.size()/2);
    vector<int> s2 (s.begin() + s.size()/2, s.end());*/

    for(int i = 0; i < n; i++)
    {
        s1 += s[i];
    }
    for(int i = n; i < 2*n; i++)
    {
        s2 += s[i];
    }

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    bool flag1 = true;
    bool flag2 = true;

    int count1 = 0;
    int count2 = 0;

    for(int i = 0; i < n; i++)
    {
        if(s1[i] <= s2[i])
        {
            flag1 = false;
        }
        if(s1[i] >= s2[i])
        {
            flag2 = false;
        }
    }

    if(flag1 || flag2)
    {
        YES
        nl
    }
    else
    {
        NO
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
