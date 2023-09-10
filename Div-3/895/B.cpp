#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{

   int n;
   cin>>n;

   int mini = INT_MAX;

   for(int i=0;i<n;i++)
   {
      int a,b;
      cin>>a>>b;

      if(b%2==0)
      {
         mini = min(mini, a+(b/2)-1);
      }
      else
      {
        mini = min(mini, a+(b/2));
      }
   }


   cout<<mini<<endl;


}

int main()
{
    ll n;
    cin>>n;

    while(n--)
    {
        solve();
    }
}