
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


long check(string s)
{
    long count = 0;
    for(long i = 0; i < s.size(); i++)
    {
        if(s[i] == 'B' or s[i] == 'b')
        {
            count++;
        }
    }

    return count;
}


void passion()
{
    string s;
    cin >> s;

    long n = s.size();

    if(check(s) == n)
    {
        cout << " ";
        nl
        return;
    }

    vector<long>B, b;
    map<long, long>mp;
    string ans = "";

    for(long i = 0; i < n; i++)
    {
        if(isupper(s[i]))
        {
            if(s[i] == 'B')
            {
                if(B.size())
                {
                    B.pop_back();
                }
            }
            else
            {
                B.pb(i);
            }
        }
        else
        {
            if(s[i] == 'b')
            {
                if(b.size())
                {
                    b.pop_back();
                }
            }
            else
            {
                b.pb(i);
            }
        }
    }

    for(auto &it: B)
    {
        mp[it]++;
    }
    for(auto &it: b)
    {
        mp[it]++;
    }

    for(auto &it: mp)
    {
        ans += s[it.fi];
    }

    cout << ans;
    nl
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
