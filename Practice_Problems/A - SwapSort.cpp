///A - SwapSort

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


void passion()
{
    long n;
    cin >> n;
    bool flag = false;

    vector<long>a(n);
    vector<long>b;
    vector<long>ans;
    vector<long>idx1;
    vector<long>idx2;
    set<long>st;

    for(auto &it : a)
    {
        cin >> it;
    }

    b = a;

    srt(b)

    long count = 0;

    for(long i = 0; i < n; i++)
    {
        if(a[i] != b[i])
        {
            for(long j = (i + 1); j < n; j++)
            {
                if(a[j] == b[i])
                {
                    swap(a[i], a[j]);
                    idx1.pb(i);
                    idx2.pb(j);
                    count++;
                    break;
                }
            }
        }
    }

    cout << count;
    nl

    for(long i = 0; i < count; i++)
    {
        cout << idx1[i] << " " << idx2[i];
        nl
    }

    /*if(ans.size() != 0)
    {
        srt(ans)

        auto uni = unique(ans.begin(), ans.end());

        ans.erase(uni, ans.end());

        long len = ans.size();

        cout << len / 2;
        nl

        if(len > 2)
        {
            for(long i = 0; i < len; i += 2)
            {
                cout << ans[i] << " ";
            }
            nl
            for(long i = len - 1; i > 0; i -= 2)
            {
                cout << ans[i] << " ";
            }
            nl
        }
        else
        {
            for(long i = 0; i < len; i++)
            {
                cout << ans[i] << " ";
            }
            nl
        }
    }
    else
    {
        zero
        nl
    }*/
}



int main()
{
    FastRead();
    /*#ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
    #endif*/

    /*long TheoryOfSomething, TheoryOfEverything;
    cin >> TheoryOfSomething;

    TheoryOfEverything = TheoryOfSomething;

    while(TheoryOfEverything--)
    {
        passion();
    }*/

    passion();


    SuccessfullyExecuted
}
