
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
long a[6];
long brr[N];


bool check()
{
    long x1 = a[0], y1 = a[1], x2 = a[2], y2 = a[3], x3 = a[4], y3 = a[5];
    long dis1 = pow((x1 - x2), 2) + pow((y1 - y2), 2);
    long dis2 = pow((x1 - x3), 2) + pow((y1 - y3), 2);
    long dis3 = pow((x2 - x3), 2) + pow((y2 - y3), 2);

    if(dis1 == 0 or dis2 == 0 or dis3 == 0)
    {
        return false;
    }

    return (dis1 + dis2 == dis3) or (dis1 + dis3 == dis2) or (dis3 + dis2 == dis1);
}


void passion()
{
    long x1, y1, x2, y2, x3, y3;
    scanf("%lld%lld%lld%lld%lld%lld", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5]);

    if(check())
    {
        printf("RIGHT\n");
        return;
    }

    for(long i = 0; i < 6; i++)
    {
        a[i]--;

        if(check())
        {
            printf("ALMOST\n");
            return;
        }

        a[i] += 2;
        if(check())
        {
            printf("ALMOST\n");
            return;
        }

        a[i]--;
    }

    printf("NEITHER\n");
}



int main()
{

    /*long ToS, ToE;
    scanf("%lld", &ToS);

    ToE = ToS;

    while(ToE--)
    {
        passion();
    }*/

    passion();


    SuccessfullyExecuted
}
