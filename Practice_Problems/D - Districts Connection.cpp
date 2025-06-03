///There is none worthy of worship except ALLAH and Muhammad(SWT) is the messenger of ALLAH.


/**
*
*   author :: 101rror
*
**/

#include<bits/stdc++.h>

using namespace std;

#define  FastRead  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  Executed  return 0;
#define  nl        cout << "\n";

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
    cin >> n;

    vector<long>a(n);

    for(auto &it : a)
    {
        cin >> it;
    }

    vector<pair<long, long>> pairs;
    long idx = 0;
    bool check = false;

    for(long i = 1; i < n; i++)
    {
        if(a[0] != a[i])
        {
            idx = i;
            pairs.pb({1, i + 1});
            check = true;
        }
    }

    for(long i = 1; i < n; i++)
    {
        if(a[0] == a[i])
        {
            pairs.pb({idx + 1, i + 1});
        }
    }



    if(check)
    {
        cout << "YES";
        nl
        for(auto it : pairs)
        {
            cout << it.fi << " " << it.se;
            nl
        }
    }
    else
    {
        cout << "NO";
        nl
    }
}


int32_t main()
{
    FastRead


    int efforts;
    cin >> efforts;

    while (efforts--)
    {
        passion();
    }


    Executed
}
