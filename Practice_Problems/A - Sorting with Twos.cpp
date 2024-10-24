
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


void passion()
{
    long n;
    scanf("%lld", &n);
    //bool flag = false;

    for(long i = 1; i <= n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    for(long i = 3, p = 2; i <= n; i++)
    {
        if(i == p + 1)
        {
            p *= 2;
        }
        else
        {
            if(arr[i] < arr[i - 1])
            {
                NO
                return;
            }
        }

    }

    YES
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
