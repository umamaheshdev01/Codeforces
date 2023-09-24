#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
     ll m,n;
     cin>>m>>n;

     vector<ll> fruits;
     for(int i=0;i<m;i++)
     {
        ll p;
        cin>>p;
        fruits.push_back(p);
     }

     vector<ll> cum(n,0);
     cum[0]=fruits[0];

     for(int i=1;i<m;i++)
     {
        cum[i]=cum[i-1];
     }

     vector<ll> heights;

    for(int i=0;i<m;i++)
     {
        ll p;
        cin>>p;
        heights.push_back(p);
     }




    


   

     ll super = 0;
     ll c=1;

     for(int i=1;i<m;i++)
     {
        ll count =1;
        while(i<m && heights[i-1]%heights[i]==0 && (cum[i]-super)<=n)
        {
            count++;
            i++;
        }

        c=max(c,count);
        super=cum[i];
        
     }

    cout<<c<<endl;


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