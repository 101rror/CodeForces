///B - Ternary String

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
const int N = 2000001;
const int M = 37;
const int MOD = 1000000007;
const int inf = 1234567890;
const long long INF = 1122334455667788990;



bool isprime(int ToE)
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
#define FastRead() (ios_base:: sync_with_stdio(false),cin.tie(0))
#define SuccessfullyExecuted return 0;

#define  YES      cout << "YES";
#define  NO       cout << "NO";
#define  Yes      cout << "Yes";
#define  No       cout << "No";
#define  one      cout << "1";
#define  mone     cout << "-1";
#define  zero     cout << "0";
#define  nl       cout << "\n";
#define  spa      cout << " ";

#define  srt(s)   sort(s.begin(),s.end());
#define  rsrt(s)  sort(s.rbegin(),s.rend());
#define  rvs(s)   reverse(s.begin(), s.end());

#define  signed   int32_t
#define  long     long long
#define  fi       first
#define  se       second
#define  pb       push_back
#define  pp       pop_back


long arr[N];
long brr[N];


void passion()
{
    //long n;
    //cin >> n;
    //bool flag = false;

    string s;
    cin >> s;

    long ln = s.size();

    /*vector<long>a;
    set<long>st;

    while(n != 0)
    {
        long rem = n % 10;
        a.pb(rem);
        n /= 10;
    }

    rsrt(a)

    for(auto it: a)
    {
        st.insert(it);
    }

    long ln = a.size();
    long c1 = st.size();

    if(c1 < 3)
    {
        zero
        nl
        return;
    }
    if(c1 == 3 and ln == 3)
    {
        cout << "3";
        nl
        return;
    }*/

    long mn = INT_MAX;

    unordered_map<char, long> mp;

    for(long i = 0; i < ln; i++)
    {
        mp[s[i]] = i;

        if(mp.size() == 3)
        {
            long cmx = max({mp['1'], mp['2'], mp['3']});
            long cmn = min({mp['1'], mp['2'], mp['3']});

            mn = min(mn, 1 + (cmx - cmn));
        }
    }

    long len = mp.size();

    if(len != 3)
    {
        zero
        nl
    }
    else
    {
        cout << mn;
        nl
    }
}



int main()
{
    FastRead();
    /*#ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
    #endif*/

    long TheoryOfSomething, TheoryOfEverything;
    cin >> TheoryOfSomething;

    TheoryOfEverything = TheoryOfSomething;

    while(TheoryOfEverything--)
    {
        passion();
    }

    //passion();


    SuccessfullyExecuted
}
