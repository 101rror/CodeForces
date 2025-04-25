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

    vector<vector<int>> a(n, vector<int>(n));
    set<int>st;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            st.insert(a[i][j]);
        }
    }

    vector<int> temp(st.begin(), st.end());
    vector<int>uni;

    if(st.find(1) == st.end())
    {
        uni.pb(1);
    }
    if(st.find(2 * n) == st.end())
    {
        uni.pb(2 * n);
    }

    for(int i = 1; i < temp.size(); i++)
    {
        if (temp[i] - temp[i - 1] > 1)
        {
            uni.pb(temp[i] - 1);
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(find(uni.begin(), uni.end(), a[i][j]) == uni.end())
            {
                uni.pb(a[i][j]);
            }
        }
    }

    for(auto it : uni)
    {
        cout << it << " ";
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
