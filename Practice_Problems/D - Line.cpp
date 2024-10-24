/// D - Line

/**
 *
 *   author :: 101rror
 *
 **/

#include <bits/stdc++.h>

using namespace std;

//.......................................................(101rror)
#define SuccessfullyExecuted return 0;

#define YES printf("YES\n");
#define NO printf("NO\n");
#define Yes printf("Yes\n");
#define No printf("No\n");
#define one printf("1\n");
#define mone printf("-1\n");
#define zero printf("0\n");
#define nl printf("\n");

#define asrt(s) sort(s, s + n);
#define arsrt(s) sort(s, s + n, greater<long>());
#define arvs(s) reverse(s, s + n);
#define srt(s) sort(s.begin(), s.end());
#define rsrt(s) sort(s.rbegin(), s.rend());
#define rvs(s) reverse(s.begin(), s.end());

#define long long long
#define fi first
#define se second
#define pb push_back

const int N = 2000001;
const int MOD = 1000000007;
long arr[N];
long brr[N];

void passion()
{
    long n;
    scanf("%lld", &n);

    string s;
    cin >> s;

    vector<long> ans;
    long count = 0;

    for (long i = 0; i < n; i++)
    {
        long cnt;

        if (s[i] == 'L')
        {
            cnt = i;
        }
        else
        {
            cnt = n - (i + 1);
        }

        count += cnt;
        long mx = max(i, n - (i + 1));
        ans.pb(mx - cnt);
    }

    rsrt(ans);

    for (long i = 0; i < n; i++)
    {
        count += ans[i];
        printf("%lld ", count);
    }
    nl
}

int main()
{

    /*#ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
    #endif*/

    /***********************
    ToE = TheoryOfEverything
    ToS = TheoryOfSomething
    ***********************/

    long ToS, ToE;
    scanf("%lld", &ToS);

    ToE = ToS;

    while (ToE--)
    {
        passion();
    }

    // passion();

    SuccessfullyExecuted
}
