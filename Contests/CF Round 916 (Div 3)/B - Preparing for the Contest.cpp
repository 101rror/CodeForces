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


void passion()
{
    long n, k;
    scanf("%lld%lld", &n, &k);
    //bool flag = false;

    vector<long>a;
    vector<long>b;

    for(long i = 1; i <= n; i++)
    {
        a.pb(i);
    }

    if(k == 0)
    {
        rsrt(a);

        for(auto it : a)
        {
            printf("%lld ", it);
        }
        nl
    }
    else if(n - k == 1)
    {
        for(auto it : a)
        {
            printf("%lld ", it);
        }
        nl
    }
    else
    {
        k++;
        long x = n - 1;

        while(k)
        {
            b.pb(a[x]);
            x--;
            k--;
            a.pop_back();
        }

        rsrt(a)
        srt(b)

        for(long i = 0; i < a.size(); i++)
        {
            b.pb(a[i]);
        }

        for(auto it : b)
        {
            printf("%lld ", it);
        }
        nl
    }

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