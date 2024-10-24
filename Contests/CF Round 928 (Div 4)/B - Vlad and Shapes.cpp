// There is none worthy of worship except ALLAH and Muhammad(SWT) is the messenger of ALLAH.
// 
// *********************
//   Author :: 101rror
// *********************
// 
// Start Time :: 2024-02-22 22:48:29
// Contest :: Codeforces - Codeforces Round 928 (Div. 4)
// Problem :: B. Vlad and Shapes
// URL :: https://codeforces.com/contest/1926/problem/B


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
    bool flag = false;
    long count = 0;
    
    string s[15];


    for(long i = 1; i <= n; i++)
    {
    	cin >> s[i];
    	count = 0;
    	long ln = s[i].size();
    	
        for(long j = 0; j < ln; j++)
        {
        	if(s[i][j] == '1')
        	{
        		count++;
        	}
        }
        if(count == 1)
        {
        	flag = true;
        }
    }

    if(flag)
    {
    	cout << "TRIANGLE" << endl;
    }
    else
    {
    	cout << "SQUARE" << endl;
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