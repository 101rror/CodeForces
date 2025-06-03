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


bool check(const vector<long>& a)
{
    for(int i = 1; i < a.size(); i++)
    {
        if(a[i - 1] != a[i])
        {
            return false;
        }
    }

    return true;
}


void passion()
{
    long n;
    cin >> n;

    vector<long>a(n);

    for(auto &it : a)
    {
        cin >> it;
    }

    if(check(a))
    {
        cout << "NO";
        nl
        return;
    }

    long mx = *max_element(a.begin(), a.end());

    cout << "YES";
    nl
    for(long i = 0; i < n; i++)
    {
        if(a[i] == mx)
        {
            cout << 2 << " ";
        }
        else
        {
            cout << 1 << " ";
        }
    }
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
