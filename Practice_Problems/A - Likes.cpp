///Likes

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

#define  srt(s)   sort(s.begin(),s.end());
#define  rsrt(s)  sort(s.rbegin(),s.rend());

#define  signed   int32_t
#define  long     long long
#define  fi       first
#define  se       second
#define  pb       push_back
#define  pp       pop_back



void passion()
{
    long n;
    cin >> n;

    vector<long>s(n);

    int pos = 0;
    int neg = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> s[i];

        if(s[i] > 0)
        {
            pos++;
        }
        else
        {
            neg++;
        }
    }

    long postm = pos;
    long negtm = neg;
    long count = 1;

    while(postm--)
    {
        cout << count++ << " ";
    }
    count--;

    while(negtm--)
    {
        cout << --count << " ";
    }
    nl

    while(pos and neg)
    {
        cout << "1" << " " << "0" << " ";
        pos--;
        neg--;
    }
    count = 1;

    while(pos)
    {
        cout << count++ << " ";
        pos--;
    }
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
