///D - The Clock


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
long arr[N];
long brr[N];


void passion()
{
    string s;
    long x;

    cin >> s >> x;

    vector<long>check{0, 70, 140, 210, 280, 350, 601, 671, 741, 811, 881, 951, 1202, 1272, 1342, 1412};
    vector<long>tot{600, 60, 0, 10, 1};
    vector<long>a;
    set<long>st;

    long n2 = 0;

    for (int i = 0; i < 5; i++)
    {
        n2 += (int)(s[i] - '0') * tot[i];
    }

    long i = 0;

    while(i < 2022)
    {
        st.insert(n2);
        n2 += x;
        n2 %= 1440;

        i++;
    }

    long count = 0;

    for(auto &it: st)
    {
        for(long i = 0; i < check.size(); i++)
        {
            if(it == check[i])
            {
                count++;
            }
        }
    }

    printf("%lld\n", count);
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
