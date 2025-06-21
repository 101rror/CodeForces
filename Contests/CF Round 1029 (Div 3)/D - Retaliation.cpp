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


bool check(vector<long>&a)
{
    for(auto it: a)
    {
        if(it == 0)
        {
            return false;
        }
    }

    return true;
}


void solution()
{
    long n;
    cin >> n;

    vector<long>a(n);

    for(auto &it : a)
    {
        cin >> it;
    }

    long y = (2 * a[0] - a[1]) / (n + 1);
    long x = a[1] - a[0] + y;

    if(x < 0 || y < 0)
    {
        cout << "NO";
        nl
        return;
    }

    for(long i = 0; i < n; i++)
    {
        a[i] -= x * (i + 1);
        a[i] -= y * (n - i);
    }

    for(auto it : a)
    {
        if(it != 0)
        {
            cout << "NO";
            nl
            return;
        }
    }

    cout << "YES";
    nl
}


int32_t main()
{
    FastRead


    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        solution();
    }


    Executed
}
