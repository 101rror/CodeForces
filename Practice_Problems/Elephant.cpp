#include <bits/stdc++.h>
using namespace std;

#define infinity 1000000000000000LL
#define all(x) (x).begin(),(x).end()
#define FastRead ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod(x,m) ((x%m)+m)%m;
#include<bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL))
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
///101rror

int main()
{
    int x;

    cin >> x;

    int count = x / 5;
    int c = x % 5;

    if(c > 0)
    {
        count++;
    }
    cout << count;

    return 0;
}

