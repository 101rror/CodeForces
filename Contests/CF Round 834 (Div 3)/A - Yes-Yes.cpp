#include <bits/stdc++.h>
using namespace std;

#define infinity 1000000000000000LL
#define all(x) (x).begin(),(x).end()
#define FastRead ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod(x,m) ((x%m)+m)%m;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL))
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
///101rror

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int i;

        string s1, s2 = "";

        cin >> s1;

        int row;

        for(i = 0; i < 20; i++)
        {
            s2 += "Yes";
        }

        if((row = s2.find(s1, 0)) == string::npos)
        {
            cout << "NO";
            cout << endl;
        }
        else
        {
            cout << "YES";
            cout << endl;
        }
    }

    return 0;
}


