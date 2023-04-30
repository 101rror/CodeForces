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
    int i, j, n;
    cin >> n;

    int array[n];

    for(i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for(j = 1; j <= n; j++)
    {
        for(i = 0; i < n; i++)
        {
            if(array[i] == j)
            {
                cout << (i + 1) << " ";
            }
        }
    }

    return 0;
}
