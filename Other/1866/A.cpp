#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n;
    cin>>n;

    vector<int> k;

    for(int i=0;i<n;i++)
    {
       int p;
       cin>>p;

       if(p==0)
       {
         cout<<0;
         return;
       }

       if(p>0)
       {
         p=p;
       }
       else
       {
         p=-p;
       }

       k.push_back(p);
    }

    cout<<*min_element(k.begin(),k.end());


}

int main()
{
   solve();
}