
///(لَا إِلَٰهَ إِلَّا ٱللَّٰهُ مُحَمَّدٌ رَّسُولُ ٱللَّٰهِ‎)
///There is none worthy of worship except ALLAH and Muhammad(SWT) is the messenger of ALLAH.


/**
*
*   author :: 101rror
*
**/

#include<bits/stdc++.h>

using namespace std;

#define FastRead    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define SuccessfullyExecuted return 0;

#define  YES       printf("YES\n");
#define  NO        printf("NO\n");
#define  Yes       printf("Yes\n");
#define  No        printf("No\n");
#define  one       printf("1\n");
#define  mone      printf("-1\n");
#define  zero      printf("0\n");
#define  nl        printf("\n");

#define  asrt(s)   sort(s, s + n);
#define  arsrt(s)  sort(s, s + n, greater<long>());
#define  arvs(s)   reverse(s, s + n);
#define  srt(s)    sort(s.begin(),s.end());
#define  rsrt(s)   sort(s.rbegin(),s.rend());
#define  rvs(s)    reverse(s.begin(), s.end());

#define  long      long long
#define  fi        first
#define  se        second
#define  pb        push_back


const int N = 2000001;
const int MOD = 1000000007;
string sma = "abcdefghijklmnopqrstuvwxyz";
string cap = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string vow = "aeiou";
long arr[N];
long brr[N];


bool check(string s)
{
    for(long i = 1; i < s.size(); i++)
    {
        if(s[i] == s[i - 1])
        {
            return false;
        }
    }
    return true;
}


void passion()
{
    long n, m;
    scanf("%lld%lld", &n, &m);
    //bool flag = false;

    string s;
    cin >> s;

    string t;
    cin >> t;

    if(check(s))
    {
        Yes
        return;
    }
    if(!check(t) or *t.begin() != *t.rbegin())
    {
        No
        return;
    }

    long o = 0;
    long z = 0;

    for(long i = 1; i < n; i++)
    {
        if(s[i] == s[i - 1])
        {
            if(s[i] - 48 == 1)
            {
                o = 1;
            }
            else
            {
                z = 1;
            }
        }
    }

    if(o and t[0] - 48 == 1)
    {
        No
        return;
    }
    if(z and t[0] - 48 == 0)
    {
        No
        return;
    }

    Yes
}



int main()
{
    long ToS, ToE;
    scanf("%lld", &ToS);

    ToE = ToS;

    while(ToE--)
    {
        passion();
    }

    //passion();


    SuccessfullyExecuted
}
