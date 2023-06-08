# include <bits/stdc++.h>

using namespace std;

void solve()
{
   int cnt = 0,
   int x = 0;
   int n;
   cin>>n;

   for(int i=0;i<n;i++)
   {
       int a;
       cin>>a;

       cnt += (a - x) / 120;
       x = a;
   }

   cnt += (1440 - x) / 120;

   if(cnt >= 2)
   {
       cout << "YES" << endl;
   }
   else
   {
       cout << "NO" << endl;
   }
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
}
