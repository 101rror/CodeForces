#include <bits/stdc++.h>
using namespace std;

#define infinity 1000000000000000LL
#define all(x) (x).begin(),(x).end()
#define FastRead ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod(x,m) ((x%m)+m)%m;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL))
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
///101rror

int main()
{
    long long int n;
    cin >> n;

    if(n % 2 == 0 && n > 0)
    {
        cout << n / 2;
    }
    else
    {
        cout << - ((n / 2) + 1);
    }

    return 0;
}

