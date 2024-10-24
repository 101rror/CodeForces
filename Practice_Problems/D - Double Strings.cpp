///D - Double Strings


/**
*
*   author :: 101rror
*
**/

#include<bits/stdc++.h>

using namespace std;

//.......................................................(101rror)
#define SuccessfullyExecuted return 0;

#define  YES       printf("YES\n");
#define  NO        printf("NO\n");
#define  Yes       printf("Yes\n");
#define  No        printf("No\n");
#define  one       printf("1");
#define  mone      printf("-1\n");
#define  zero      printf("0");
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
long brr[N];


void passion()
{
    long n;
    scanf("%lld", &n);

    string s[n];

    map<string, bool> mp;

    for(long i = 0; i < n; i++)
    {
        cin >> s[i];
        mp[s[i]] = true;
    }

    for(long i = 0; i < n; i++)
    {
        bool ans = false;

        for(long j = 1; j < s[i].size(); j++)
        {
            string x = s[i].substr(0, j);
            string y = s[i].substr(j, s[i].size() - j); 

            if(mp[x] && mp[y])
            {
                ans = true;
            }
        }
        cout << ans;
    }
    nl
}



int main()
{

    /*#ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
    #endif*/


    /***********************
    ToE = TheoryOfEverything
    ToS = TheoryOfSomething
    ***********************/


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
