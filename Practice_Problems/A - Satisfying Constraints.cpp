// There is none worthy of worship except ALLAH and Muhammad(SWT) is the messenger of ALLAH.
// 
// *********************
//   Author :: 101rror
// *********************
// 
// Start Time :: 2024-01-28 22:55:25
// Contest :: Codeforces - Codeforces Round 919 (Div. 2)
// Problem :: A. Satisfying Constraints
// URL :: https://codeforces.com/problemset/problem/1920/A


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
    //bool flag = false;

    vector<long>ar;
    long mx = INT_MIN, mn = INT_MAX;

    for(long i = 0; i < n; i++)
    {
    	long a, x;
        scanf("%lld%lld", &a, &x);
        
        if(a == 1)
        {
        	mx = max(mx, x);
        }
        else if(a == 2)
        {
        	mn = min(mn, x);
        }
        else
        {
        	ar.pb(x);
        }
    }
    
    if(mn < mx)
    {
    	zero
    	return;
    }
    
    long ans = (mn - mx) + 2;
    
    if(ans <= 0)
    {
    	zero
    	return;
    }
    
    for(auto it: ar)
    {
    	if(it >= mx and it <= mn)
    	{
    		ans--;
    	}
    }
    
    cout << ans - 1;
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
