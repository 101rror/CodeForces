///B - Sets and Union


/**
*
*   author :: 101rror
*
**/


/**
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⣄⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⣀⣀⠀⠀⢀⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡏⠳⡀⠀⡠⠖⡊⠉⠉⣠⠊⠁⣀⣀⡤⠋⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡠⢤⠃⠀⣱⣦⣶⡿⢁⠴⣋⣤⣿⣩⠅⠐⠒⠈⠉⠉⠉⠉⠒⠤⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡜⢀⣾⣠⣼⣿⣿⣿⢿⣵⣾⣿⠿⣫⣴⣶⣶⣶⣶⣶⣶⣶⡤⠝⢍⡉⠁⢀⣠⢔⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡘⢀⣾⣿⣿⣿⣿⡟⣱⣿⣿⣟⣵⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣦⣤⡀⠈⠉⠁⠀⡼⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡀⣿⣿⣿⣿⣿⣿⣧⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⣭⣭⣭⣭⣭⡉⠀⠀⠢⣞⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠜⢇⢿⣿⣿⠙⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⢿⣿⣖⢄⠈⢣⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⠀⣿⣮⣿⣿⣧⣈⣿⣿⣿⠟⠛⢻⣿⣭⣭⣝⣛⣿⣿⣿⣿⣿⣿⣟⢿⣷⣝⢿⣧⠑⢄⢳⡀⠀⠀⢀⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡔⠉⣽⣿⠟⠉⠉⠀⠉⠀⠀⠀⠀⡿⢿⣿⣿⣿⣿⡁⠈⠛⢿⣿⣿⣿⣇⢻⣿⣷⡿⣷⣄⡙⠳⠶⠚⢹⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡅⣾⣿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⣼⣿⣿⣿⣿⣷⣀⣠⣾⡟⣿⡟⢿⠀⢿⣿⣿⡘⣿⣿⣿⠟⡱⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⢰⣿⠇⠀⠞⠀⠀⠀⠀⠀⠀⢀⣾⣿⣿⡿⠋⢁⣼⣿⣿⡿⢿⣿⡟⡇⠈⠀⣼⣿⣿⣧⠘⢯⠴⠊⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⢲⡤⠤⠤⠂⣾⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣹⢿⣿⡧⠀⠈⠉⣿⡯⣀⣀⡋⠙⣿⡇⢸⣿⣿⡍⠻⢷⡈⠳⢄⣀⣀⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠉⠲⠴⢾⣿⣿⠠⠀⠢⠤⣀⡀⠀⠀⠀⠀⠃⠘⠋⣀⡤⠚⠋⠀⠤⠄⠀⠀⠀⣿⡇⣾⣿⣿⣿⣄⢀⣀⣀⣤⠞⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⡀⠀⣀⡭⣭⣍⡒⠀⠀⠀⠀⠤⠞⣡⠞⢋⣽⣿⣗⠲⡄⠀⢀⣿⣿⣿⣿⣿⣷⡘⣄⢲⠢⣼⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⡠⢡⣿⣧⠘⡁⣼⡿⢳⣼⠀⠂⠀⠀⠀⠀⠀⡄⢸⢿⣁⣹⠟⣇⠀⣼⣿⣿⣿⣿⢻⣿⣷⣌⠻⢄⣈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠚⠒⠉⢹⣿⣇⠁⠩⡓⠚⢫⡂⠀⠀⠀⠀⠀⠀⠁⠈⠢⢉⡠⠔⣢⣾⣿⣿⣿⡿⡁⢰⣿⣿⣿⠓⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⡟⠘⡄⠀⠂⠉⠀⠀⠐⠂⠀⠀⠀⠀⠀⠀⠉⠀⠀⠈⠉⢠⣿⢿⠯⠤⢃⣾⣿⠋⢻⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠁⠀⣇⠀⠀⠀⠀⠀⠀⡀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠉⠀⠀⣂⣤⣾⣿⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣤⢼⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣛⣛⣻⣿⣿⣿⣶⣤⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡷⣸⢱⡄⠀⠀⠀⠀⠤⠐⠀⠒⠒⠐⠀⠀⠀⠀⠀⣠⣾⣗⢣⡼⣺⡇⠉⠉⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣟⠱⠻⣻⠢⡀⠀⠀⠀⠀⠉⠁⠀⠀⠀⠀⢀⡤⠚⠉⠈⣇⠌⡟⣸⠷⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⠃⠤⣿⠀⠈⠓⢤⣀⠀⠀⠀⠀⣀⡤⠚⠁⣀⡤⠤⠒⢻⠈⠁⢹⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⠀⣼⠀⠀⠀⡟⠪⣵⣶⣾⠭⠔⠒⠋⠉⢀⣀⣤⣶⣿⣀⣀⣸⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⠉⠀⢀⡤⣷⣄⠀⠀⢀⣤⣤⣶⣶⣿⣿⣿⣿⣿⠟⠉⠉⠻⣷⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⠤⠊⠁⣰⢹⣿⠀⠀⢸⣿⣿⣿⣿⣿⣿⠿⣻⠋⠀⠀⠀⠀⠈⠻⣷⣤⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⡶⠋⠀⠀⠀⣴⣿⠆⠙⠀⠀⠘⢛⣛⣛⣩⣭⣴⣾⠃⠀⠀⠀⠀⠀⠀⠀⠀⡏⢳⣾⣷⣦⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⣠⣶⣿⣿⠏⠀⠀⠀⠀⣼⢻⣿⠈⣿⠿⠻⣿⣿⣿⣿⣿⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⡸⠀⣼⣿⣿⣿⣿⣿⣷⣦⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⣴⣿⣿⣿⡟⠀⣀⣀⣀⣴⣿⠀⢻⠀⣏⣀⡀⢽⣻⣽⣿⣿⣿⣿⣿⣶⣶⣶⣤⣤⣤⣄⣠⠓⠛⠛⠿⠿⠿⣿⣿⣿⣿⣿⣷⣄⡀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⡜⠉⠉⠉⢩⣿⣿⣿⣿⣿⡍⣿⡆⠀⠘⠋⢡⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡏⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⢙⣿⠛⢆⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⣸⠀⠀⠀⠀⣾⣿⣿⣿⣿⣿⣿⣿⣿⢀⣠⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⣿⣿⡆ ⠈⢆⠀⠀⠀⠀
⠀⠀⠀⠀⢰⡇⠀⠀⠀⣸⣿⣿⣿⣿⣿⣿⣿⣿⡇⣼⣿⣿⣿⣿⣿⠤⠤⠤⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀ 101rror⠀⠀⢀⣾⣿⣿⣿⣷⠀⠈⠆⠀⠀⠀
⠀⠀⠀⢀⣧⡇⠀⠀⢠⠟⠉⠀⠈⢿⣿⣿⣿⣿⢡⣿⣿⣿⣿⣿⣿⣤⣤⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀  Tanjiro⠀⠀⢠⣾⣿⣿⣿⣿⣿⡆⠀⠸⡄⠀⠀
⠀⠀⠀⣼⣿⠀⠀⠀⣼⡀⠀⠀⣄⣀⣻⣿⣿⡏⢸⠋⠉⣿⣿⣿⣿⣿⡿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀Kamando ⠀⣰⣿⣿⣿⣿⣿⣿⣿⣧⠀⠀⢡⠀⠀
⠀⠀⢰⣿⢹⠀⠀⢀⣿⣖⣀⣨⡏⠙⢻⣿⣿⠇⣿⣶⣶⣿⣿⣿⣿⣿⣿⣼⠿⠿⠿⠿⣿⣿⣿⣿⣿⣀⣀⣀⣀⣀⣀⣀⣀⣰⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠈⡄⠀
⠀⢀⣿⡇⢸⣿⣿⡿⠀⠀⠘⢿⣧⡤⠘⠛⣿⢰⣿⣿⣿⣿⠿⢿⣟⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⡿⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣇⠀⠀⢣⠀
⠀⣼⢻⠁⢸⣿⣿⠃⠀⠀⠀⢨⣿⣷⣤⠈⠛⣿⡟⣫⣭⣶⣾⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⠁⠈⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⣿⣿⣿⠀
⢠⣿⢿⠀⢸⣿⡿⠀⠀⠀⠀⣾⣿⣿⣷⣦⣴⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⠁⠀⠀⢹⣿⣿⣿⣿⣿⣿⠟⠁⠀⣿⣿⣿⡇
⠸⠿⠬⠧⠾⠿⠧⠤⠤⠤⠴⠿⠿⠿⠿⠯⠷⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠤⠤⠤⠤⠤⠤⠤⠤⠼⠿⠿⠿⠿⠿⠧⠤⠤⠤⠼⠿⠿⠿⠿⠯⠤⠤⠤⠤⠼⠿⠿⠇⠀⠀⠀⠀⠀⠀⠀
**/


#include <bits/stdc++.h>

using namespace std;


typedef unsigned long long ulong;
typedef long double longd;
const int N = 2e5 + 5;
const int M = 37;
const int MOD = 1000000007;
const int inf = 1234567890;
const long long INF = 1122334455667788990;



bool isprime(long ToE)
{
    if (ToE <= 1)
    {
        return false;
    }
    for (long ToS = 2; ToS <= sqrt(ToE); ToS++)
    {
        if (ToE % ToS == 0)
        {
            return false;
        }
    }
    return true;
}



//.......................................................(101rror)
#define SuccessfullyExecuted return 0;

#define  YES       printf("YES\n");
#define  NO        printf("NO\n");
#define  Yes       printf("Yes\n");
#define  No        printf("No\n");
#define  one       printf("1\n");
#define  mone      printf("-1\n");
#define  zero      printf("0\n");
#define  nl        printf("\n");
#define  spa       printf(" ");

#define  asrt(s)   sort(s, s + n);
#define  arsrt(s)  sort(s, s + n, greater<long>());
#define  arvs(s)   reverse(s, s + n);
#define  srt(s)    sort(s.begin(),s.end());
#define  rsrt(s)   sort(s.rbegin(),s.rend());
#define  rvs(s)    reverse(s.begin(), s.end());

#define  signed    int32_t
#define  long      long long
#define  fi        first
#define  se        second
#define  pb        push_back


long arr[N];
long brr[N];


long n, x, m;

void passion()
{
    long n;
    scanf("%lld", &n);
    //bool flag = false;

    set<long>st1[55], st2;

    for(long i = 0; i < n; i++)
    {
        scanf("%lld", &m);

        for(long j = 0; j < m; j++)
        {
            scanf("%lld", &x);

            st1[i].insert(x);
            st2.insert(x);
        }
    }

    long ans = 0;

    for(auto it : st2)
    {
        set<long>st;

        for(long j = 0; j < n; j++)
        {
            if(!st1[j].count(it))
            {
                for(auto t : st1[j])
                {
                    st.insert(t);
                }
            }
        }
        long ln = st.size();
        ans = max(ln, ans);
    }

    printf("%lld\n", ans);
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

    while(ToE--)
    {
        passion();
    }

    //passion();


    SuccessfullyExecuted
}
