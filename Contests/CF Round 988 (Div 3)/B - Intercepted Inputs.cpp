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
    int n;
    cin >> n;

    vector<int> a(n);
    unordered_map<int, bool> mp;

    for (auto &it : a)
    {
        cin >> it;
        mp[it] = true;
    }

    srt(a);

    int check = n - 2, x = 0, y = 0;

    for (auto it : a)
    {
        if (check % it == 0)
        {
            int t = (check / it);

            if (mp.count(t))
            {
                x = it;
                y = t;
                break;
            }
        }
    }

    cout << x << " " << y;
    nl
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
