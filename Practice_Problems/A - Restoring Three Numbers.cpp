///Restoring Three Numbers

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


const int N = 1e6+10;
#define MAX 1000000                                     //101rror
#define FastRead() (ios_base:: sync_with_stdio(false),cin.tie(0))
#define SuccessfullyExecuted return 0;

#define  YES      cout << "YES";
#define  NO       cout << "NO";
#define  Yes      cout << "Yes";
#define  No       cout << "No";
#define  one      cout << "-1";
#define  nl       cout << "\n";

#define  srt(s)   sort(s.begin(),s.end());
#define  rsrt(s)  sort(s.rbegin(),s.rend());

#define  signed   int32_t
#define  long     long long
#define  fi       first
#define  se       second
#define  pb       push_back
#define  pp       pop_back



void passion()
{
    bool flag = false;

    vector<int>vec;

    for(int i = 0; i < 4; i++)
    {
        int x;
        cin >> x;
        vec.pb(x);
    }

    srt(vec)

    int c1 = vec[3] - vec[0];
    int c2 = vec[3] - vec[1];
    int c3 = vec[3] - vec[2];

    nl
    cout << c3 << " " << c2 << " " << c1;
    nl
}



int main()
{
    FastRead();
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);


    passion();


    SuccessfullyExecuted
}
