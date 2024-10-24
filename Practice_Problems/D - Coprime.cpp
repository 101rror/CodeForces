///D - Coprime


/**
*
*   author :: 101rror
*
**/


#include <bits/stdc++.h>

using namespace std;


//.......................................................(101rror)
#define SuccessfullyExecuted return 0;

#define  YES       printf("YES\n");
#define  NO        printf("NO\n");
#define  Yes       printf("Yes\n");
#define  No        printf("No\n");
#define  one       printf("1\n");
#define  mone      printf("-1\n");
#define  zero      printf("0\n");
#define  nl        printf("\n");
#define  spa       printf(" ");

#define  asrt(s)   sort(s, s + n);
#define  arsrt(s)  sort(s, s + n, greater<long>());
#define  arvs(s)   reverse(s, s + n);
#define  srt(s)    sort(s.begin(),s.end());
#define  rsrt(s)   sort(s.rbegin(),s.rend());
#define  rvs(s)    reverse(s.begin(), s.end());

#define  signed    int32_t
#define  long      long long
#define  fi        first
#define  se        second
#define  pb        push_back


const int N = 2000001;
const int MOD = 1000000007;
long arr[N];
long brr[N];


long gcd(long a, long b)
{
    return __gcd(a, b);
}


void passion()
{
    long n;
    scanf("%lld", &n);
    //bool flag = false;

    vector<long>a(n);
    map<long, long>mp;

    long ans = -1;

    for(auto &it : a)
    {
        scanf("%lld", &it);
    }

    for(long i = 0; i < n; i++)
    {
        mp[a[i]] = i + 1;
    }

    for(auto &it: mp)
    {
        for(auto &jt: mp)
        {
            long x = it.fi;
            long y = jt.fi;

            if(gcd(x, y) == 1)
            {
                long s = (it.se + jt.se);

                ans = max(ans, s);
            }
        }
    }

    printf("%lld\n", ans);
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
