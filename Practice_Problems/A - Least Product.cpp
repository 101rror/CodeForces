// There is none worthy of worship except ALLAH and Muhammad(SWT) is the messenger of ALLAH.
// 
// *********************
//   Author :: 101rror
// *********************
// 
// Start Time :: 2024-02-02 20:10:38
// Contest :: Codeforces - Codeforces Round 917 (Div. 2)
// Problem :: A. Least Product
// URL :: https://codeforces.com/contest/1917/problem/A


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

    vector<long>a(n);
    
    long zer = 0, neg = 0, pos = 0;

    for(auto &it : a)
    {
        scanf("%lld", &it);
        
        if(it < 0)
        {
        	neg++;
        }
        else if(it == 0)
        {
        	zer++;
        }
        else
        {
        	pos++;
        }
    }

    if(zer or neg & 1)
    {
        zero
    }
    else
    {
        one
        cout << "1" << " " << "0";
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