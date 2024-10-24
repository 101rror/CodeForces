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


long sum(long n, vector<long>&a)
{
    long tsum = 0;

    for(long i = 0; i < n; i++)
    {
        tsum += a[i];
    }

    return tsum;
}


void passion()
{
    long n;
    scanf("%lld", &n);
    //bool flag = false;

    vector<long>a(n);

    long even = 0;
    long odd = 0;
    long sum = 0;

    for(auto &it : a)
    {
        scanf("%lld", &it);
    }

    for(long i = 0; i < n; i++)
    {
        sum += a[i];

        if(a[i] % 2)
        {
            odd++;
        }
        else
        {
            even++;
        }

        if(i == 0)
        {
            cout << sum << " ";
        }
        else
        {
            if(odd % 3 == 1)
            {
                cout << sum - (odd/3) - 1 << " ";
            }
            else
            {
                cout << sum - (odd/3) << " ";
            }
        }
    }
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
