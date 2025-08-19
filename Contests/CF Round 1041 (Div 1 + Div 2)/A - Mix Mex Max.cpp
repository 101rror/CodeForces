
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


long mex(const vector<long>& b)
{
    set<long> s(b.begin(), b.end());
    for (long i = 0;; i++)
    {
        if (s.find(i) == s.end())
        {
            return i;
        }
    }
}

bool isGood(const vector<long>& a)
{
    long n = a.size();
    for (long i = 0; i <= n - 3; i++)
    {
        vector<long> triplet = {a[i], a[i + 1], a[i + 2]};
        long mx = max({triplet[0], triplet[1], triplet[2]});
        long mn = min({triplet[0], triplet[1], triplet[2]});
        if (mex(triplet) != mx - mn)
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

    vector<long> a(n), ori;
    bool missing = true;

    for (auto& it : a)
    {
        cin >> it;
        ori.push_back(it);

        if (it != -1)
        {
            missing = false;
        }
    }

    if (missing)
    {
        cout << "YES\n";
        return;
    }

    for (long i = 0; i <= 100; i++)
    {
        a = ori;
        for (int j = 0; j < n; j++)
        {
            if (a[j] == -1) a[j] = i;
        }
        if (isGood(a))
        {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
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
