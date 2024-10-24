///A - Gift Carpet


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
    long n, m;
    scanf("%lld%lld", &n, &m);

    vector<string>a;

    string s1 = "vika";

    for(long i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        a.pb(s);
    }

    long count = 0;

    for(long i = 0; i < m; i++)
    {
        bool flag = false;

        for(long j = 0; j < n; j++)
        {
            if(s1[count] == a[j][i])
            {
                flag = true;
            }
        }

        if(flag)
        {
            count++;

            if(count == 4)
            {
                break;
            }
        }
    }

    if(count == 4)
    {
        YES
    }
    else
    {
        NO
    }
}



int main()
{

    //FastRead

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
