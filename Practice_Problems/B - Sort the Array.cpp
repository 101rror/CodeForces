///Sort the Array

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
#define SuccessfullyExecuted return 0;

#define  YES      cout << "YES";
#define  NO       cout << "NO";
#define  yes      cout << "yes";
#define  no       cout << "no";
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


int n;
int vec[N];


void passion()
{
    //long n;
    cin >> n;
    bool flag = false;

    //vector<long>vec;
    set<long>st;

    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> vec[i];
    }

    vector<long>vec1;

    int f = 1;

    for(int i = 1; i < n; i++)
    {
        if(vec[i] > vec[i + 1])
        {
            f = i;
            break;
        }
    }

    int r = 1;

    for(int i = 2; i <= n; i++)
    {
        if(vec[i - 1] > vec[i])
        {
            r = i;
        }
    }

    reverse(vec + f, vec + r + 1);

    /*if(vec1 == vec)
    {
        yes
        nl
        cout << vec[f] << " " << vec[l - 1];
        return;
    }
    else
    {
        while(f < n and vec[f] == vec1[f])
        {
            f++;
        }
        while(l >= 0 and vec[l] == vec1[l])
        {
            l--;
        }*/

    for(int i = 1; i < n; i++)
    {
        if(vec[i] > vec[i + 1])
        {
            flag = true;
        }
    }

    if(flag)
    {
        no
        return;
    }
    else
    {
        yes
        nl
        cout << f << " " << r;
        nl
        return;
    }
}



int main()
{
    FastRead();
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);


    passion();


    SuccessfullyExecuted
}
