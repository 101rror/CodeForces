///Most Similar Words

/**
*
*   author :: 101rror
*
**/

#include <bits/stdc++.h>

using namespace std;


const int N = 1e6+10;
#define MAX 1000000                                     //101rror
#define FastRead() (ios_base:: sync_with_stdio(false),cin.tie(0))

#define  YES      cout << "YES";
#define  NO       cout << "NO";
#define  Yes      cout << "Yes";
#define  No       cout << "No";
#define  one      cout << "-1";
#define  nl       cout << "\n";

#define  srt(s)   sort(s.begin(),s.end())
#define  rsrt(s)  sort(s.rbegin(),s.rend())

#define  signed   int32_t
#define  long     long long
#define  fi       first
#define  se       second
#define  pb       push_back
#define  pp       pop_back



void passion()
{
    long n, m;
    cin >> n >> m;

    vector<string>vec(n);
    set<int>st;

    for(int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            string s1 = vec[i];
            string s2 = vec[j];
            int sum = 0;

            for(int k = 0; k < m; k++)
            {
                sum += abs(s1[k] - s2[k]);
            }
            st.insert(sum);
        }

    }

    int result = *st.begin();

    cout << result;
    nl
}



int main()
{
    FastRead();
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    long testCase;
    cin >> testCase;

    while(testCase--)
    {
        passion();
    }

    return 0;
}
