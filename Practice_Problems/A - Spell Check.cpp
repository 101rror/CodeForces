///Spell Check

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
    long n;
    cin >> n;

    string s;
    cin >> s;

    sort(s.begin(), s.end());

    int countt = 0;
    int counti = 0;
    int countm = 0;
    int countu = 0;
    int countr = 0;

    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'T')
        {
            countt++;
        }
        if(s[i] == 'i')
        {
            counti++;
        }
        if(s[i] == 'm')
        {
            countm++;
        }
        if(s[i] == 'u')
        {
            countu++;
        }
        if(s[i] == 'r')
        {
            countr++;
        }
    }

    if(countt > 1 or counti > 1 or countm > 1 or countu > 1 or countr > 1)
    {
        NO
        nl
    }
    else
    {
        regex pattern("^[T]+[i]+[m]+[r]+[u]+$");

        /*

        string check = "Timur";
        int count = 0;

        for(long i = 0; i < 5; i++)
        {
            int j = 0;
            while(j < n)
            {
                if(check[i] == s[j])
                {
                    count++;
                }
                j++;
            }
        }

        if(count == 5)
        {
            YES
            nl
        }*/
        if(regex_match(s, pattern))
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
