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


bool isMatch(const vector<int>& a, const vector<int>& b)
{
    int i = 0, j = 0;
    int n = a.size(), m = b.size();

    while (i < n && j < m)
    {
        if (a[i] >= b[j])
        {
            j++;
        }
        i++;
    }

    return j == m;
}


bool isMatchK(const vector<int>& a, const vector<int>& b, int k)
{
    int i = 0, j = 0;
    int n = a.size(), m = b.size();

    while (i <= n)
    {
        if (j == m)
        {
            return true;
        }

        if (i < n && a[i] >= b[j])
        {
            i++, j++;
        }
        else if (k >= b[j])
        {
            j++;
            k = -1;
        }
        else
        {
            i++;
        }
    }

    return j == m;
}



void passion()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);

    for (auto &it : a)
    {
        cin >> it;
    }
    for (auto &it : b)
    {
        cin >> it;
    }

    if (isMatch(a, b))
    {
        cout << 0;
        nl
        return;
    }

    int first = 0, last = 1e9, ans = -1;
    while (first <= last)
    {
        int mid = first + (last - first) / 2;

        if (isMatchK(a, b, mid))
        {
            ans = mid;
            last = mid - 1;
        }
        else
        {
            first = mid + 1;
        }
    }

    cout << ans;
    nl
}


int32_t main()
{
    FastRead;

    int efforts;
    cin >> efforts;

    while (efforts--)
    {
        passion();
    }

    Executed;
}
