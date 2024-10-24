// There is none worthy of worship except ALLAH and Muhammad(SWT) is the messenger of ALLAH.
// 
// *********************
//   Author :: 101rror
// *********************
// 
// Start Time :: 2024-02-04 21:45:01
// Contest :: Codeforces - Codeforces Round 843 (Div. 2)
// Problem :: A1. Gardener and the Capybaras (easy version)
// URL :: https://codeforces.com/contest/1775/problem/A1


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
    string s;
    cin >> s;
    
    long n = s.size();
    
    if(s[0] == s[1])
    {
    	cout << s[0] << " " << s[1] << " " << s.substr(2, n);
    	nl
    }
    else if(s[0] == s[n - 1])
    {
    	cout << s[0] << " " << s.substr(1, n - 2) << " " << s[n - 1];
    	nl
    }
    else 
    {
    	if(s[0] == 'a')
    	{
    		cout << s[0] << " " << s.substr(1, n - 2) << " " << s[n - 1];
    		nl
    	}
    	else
    	{
    		cout << s[0] << " " << s[1] << " " << s.substr(2, n - 1);
    		nl
    	}
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