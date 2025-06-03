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

    long sum = 0;

    for(auto &it : a)
    {
        cin >> it;
        sum += it;
    }

    if(n == 2)
    {
        if(a[0] == a[1])
        {
            cout << 2;
            nl
        }
        else
        {
            cout << 0;
            nl
        }
        return;
    }

    long first = 0, last = n - 1, alice = a[0], bob = a[n - 1], maxEat = 0;

    while(first < last)
    {
        if(alice == bob)
        {
            long two = (first + 1 + (n - last));
            maxEat = max(maxEat, two);
        }

        if(alice <= bob)
        {
            first++;
            alice += a[first];
        }
        else if(alice > bob)
        {
            last--;
            bob += a[last];
        }
    }

    cout << maxEat;
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
