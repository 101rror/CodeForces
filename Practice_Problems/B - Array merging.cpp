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
long arr[N];
long brr[N];


void passion()
{
    long n;
    scanf("%lld", &n);

    vector<long>a(n + 1), b(n + 1);
    vector<long>c(2 * n + 1);

    for (long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (long i = 1; i <= n; i++)
    {
        cin >> b[i];
    }

    long cnt = 0, ans = 0;

    for(long i = 1; i <= n; i++)
    {
        if(a[i] == a[i - 1])
        {
            cnt++;
        }
        else
        {
            cnt = 1;
        }

        c[a[i]] = max(c[a[i]], cnt);
    }

    cnt = 0;

    for(long i = 1; i <= n; i++)
    {
        if(b[i] == b[i - 1])
        {
            cnt++;
        }
        else
        {
            cnt = 1;
        }

        ans = max(ans, c[b[i]] + cnt);
    }

    for (int i = 1; i <= 2 * n; i++)
    {
        ans = max(ans, c[i]);
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
