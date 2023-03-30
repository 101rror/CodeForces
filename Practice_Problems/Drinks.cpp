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
    int n;
    cin >> n;

    int array[n];

    double ans, sum;

    for(int i = 0; i < n; i++)
    {
        cin >> array[i];

        sum += array[i];
    }

    ans = sum / n;

    cout << fixed << setprecision(12);
    cout << ans;

    return 0;
}


