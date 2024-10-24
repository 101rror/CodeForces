// There is none worthy of worship except ALLAH and Muhammad(SWT) is the messenger of ALLAH.
// 
// *********************
//   Author :: 101rror
// *********************
// 
// Start Time :: 2024-02-21 21:54:28
// Contest :: Codeforces - Codeforces Round 928 (Div. 4)
// Problem :: C. Vlad and a Sum of Sum of Digits
// URL :: https://codeforces.com/contest/1926/problem/C


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
vector<long>ans(N);


long Digitsum(long num)
{
    long sum = 0;
    
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    
    return sum;
}
 
 
void passion()
{
    long n;
    scanf("%lld", &n);
    
    cout << ans[n - 1];
    nl
}
 
 
 
int main()
{
	int sum = 0;
    
    for (int i = 1; i <= N; i++)
    {
    	sum += Digitsum(i);
    	ans[i - 1] = sum;
    }
    
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