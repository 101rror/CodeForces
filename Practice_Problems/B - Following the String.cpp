// There is none worthy of worship except ALLAH and Muhammad(SWT) is the messenger of ALLAH.
// 
// *********************
//   Author :: 101rror
// *********************
// 
// Start Time :: 2024-02-08 00:19:04
// Contest :: Codeforces - Codeforces Round 923 (Div. 3)
// Problem :: B. Following the String
// URL :: https://codeforces.com/contest/1927/problem/B


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
string al = "abcdefghijklmnopqrstuvwxyz";


void passion()
{
    long n;
    scanf("%lld", &n);
    //bool flag = false;

	map<char, long>mp;
    vector<long>a(n);
    
    for(long i = 0; i < 26; i++)
    {
    	mp[al[i]] = 0;
    }

    for(auto &it: a)
    {
        scanf("%lld", &it);
        
        for(auto &itr: mp)
        {
        	if(itr.se == it)
        	{
        		cout << itr.fi;
        		mp[itr.fi]++;
        		break;
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