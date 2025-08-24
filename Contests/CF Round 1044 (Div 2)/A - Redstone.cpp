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



void solution()
{
    long n;
    cin >> n;

    vector<long>a(n);

    for(auto &it : a)
    {
        cin >> it;
    }

    unordered_set<long> seen;
    for (auto it: a)
    {
        if (seen.count(it))
        {
            cout << "YES";
            nl
            return;
        }
        seen.insert(it);
    }

    cout << "NO";
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
