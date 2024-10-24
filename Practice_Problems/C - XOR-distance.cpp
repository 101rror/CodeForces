// There is none worthy of worship except ALLAH and Muhammad(SWT) is the messenger of ALLAH.
// 
// *********************
//   Author :: 101rror
// *********************
// 
// Start Time :: 2024-02-01 23:27:33
// Contest :: Codeforces - Codeforces Round 922 (Div. 2)
// Problem :: C. XOR-distance
// URL :: https://codeforces.com/contest/1918/problem/C


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
    long a, b, r;
    scanf("%lld%lld%lld", &a, &b, &r);
    //bool flag = false;
    
    if(r == 0)
    {
    	cout << abs(a - b);
    	nl
    	return;
    }

    if((a & 1 and b % 2 == 0) or (a % 2 == 0 and b % 2 == 0))
    {
    	long x = (a ^ 1);
    	long y = (b ^ 1);
    	long c = abs(x - y);
    	cout << c;
    }
    else if(a % 2 == 0 and b % 2 == 0)
    {
    	long x = (a ^ 1);
    	long y = (b ^ 1);
    	long c = abs(x - y);
    	cout << c;
    }
    else
    {
    	long x = (a ^ 1);
    	long y = (b ^ 1);
    	long c = abs(x - y);
    	cout << c;
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
