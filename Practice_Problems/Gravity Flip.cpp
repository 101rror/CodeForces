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
    int i, n;
    cin >> n;

    int array[n];

    for(i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for(i = 0; i < n - 1; i++)
    {
        for(int j = i; j < n - 1; j++)
        {
            if(array[i] > array[j + 1])
            {
                int swap;

                swap = array[i];
                array[i] = array[j + 1];
                array[j + 1] = swap;
            }
        }
    }

    for(i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}
