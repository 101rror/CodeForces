// There is none worthy of worship except ALLAH and Muhammad(SWT) is the messenger of ALLAH.
// 
// *********************
//   Author :: 101rror
// *********************
// 
// Start Time :: 2024-02-04 23:02:28
// Contest :: Codeforces - Codeforces Round 920 (Div. 3)
// Problem :: D. Very Different Array
// URL :: https://codeforces.com/problemset/problem/1921/D


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
    //bool flag = false;

    vector<long>a(n);
    vector<long>b(m);

    for(auto &it : a)
    {
        scanf("%lld", &it);
    }
    for(auto &it : b)
    {
        scanf("%lld", &it);
    }
    
    srt(a)
    rsrt(b)
    
    if(n == m)
    {
    	long sum = 0;
    	
    	for(long i = 0; i < n; i++)
		{
			sum += abs(a[i] - b[i]);
		}
		
		cout << sum;
		nl
    }
    else if(n == 1)
    {
    	long ans = 0;
    	
    	for(long i = 0; i < m; i++)
    	{
    		long c = abs(a[0] - b[i]);
    		ans = max(ans, c);
    	}
    	
    	cout << ans;
    	nl
    }
    else
    {
    	long tsum = 0;
    	for(long i = 0; i < n; i++)
    	{
    		tsum += abs(a[i] - b[i]);
    	}
    	
    	long sum = tsum;
    	
    	for(long i = 0; i < n; i++)
		{
			tsum -= abs(a[n - i - 1] - b[n - i - 1]);
			tsum += abs(a[n - i - 1] - b[m - i - 1]);
			
			sum = max(sum, tsum);
		}
		
		cout << sum;
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
