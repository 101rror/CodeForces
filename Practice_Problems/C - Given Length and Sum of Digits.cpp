///C - Given Length and Sum of Digits...

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
    long m, s;
    cin >> m >> s;
    bool flag = false;

    vector<long>a;
    vector<long>b;

    if(s == 0)
    {
        if(m == 1)
        {
            cout << "0" << " " << "0";
        }
        else
        {
            mone spa mone
        }
        return;
    }

    if((m * 9) < s)
    {
        mone spa mone
        return;
    }

    string s1, s2;

    for(long i = 0; i < m; i++)
    {
        long t = 9;
        long c = min(s, t);
        s -= c;
        s1.pb('0' + c);
    }
    s2 = s1;

    rvs(s2)

    if(s2[0] == '0')
    {
        for(long i = 1; i < m; i++)
        {
            if(s2[i] != '0')
            {
                s2[i] = s2[i] - 1;
                s2[0] = '1';
                break;
            }
        }
    }
    cout << s2 << " " << s1 << endl;


    /*long len = (s / 2);

    for(long i = 0; i <= len; i++)
    {
        a.pb(i);
    }
    for(long i = len + 1; i < s; i++)
    {
        b.pb(i);
    }

    long l = len;

    for(long j = 0; j < len; j++)
    {
        string c1 = to_string(b[l - 1]);
        long t = c1.size();

        if(t < m)
        {
            long y = stoi(c1);
            long c = (s - y);

            cout << c << y << " " << y << c;
        }

        /*if(check == s)
        {
            if(m - t == 1)
            {
                cout << a[j] << b[l - 1] << " " << b[l - 1] << a[j];
                return;
            }
            else
            {
                l--;
            }
        }
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
