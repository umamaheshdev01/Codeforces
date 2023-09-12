#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n;
    cin>>n;

    vector<pair<ll,ll>> k;
    vector<pair<ll,ll>> m;

    for(int i=0;i<n;i++)
    {
        ll p;
        cin>>p;

        k.push_back({p,i});
    }

    sort(k.begin(),k.end());
    reverse(k.begin(),k.end());


    for(int i=0;i<n;i++)
    {
         m.push_back({k[i].second,i+1});
    }

    sort(m.begin(),m.end());

    for(auto x: m)
    {
        cout<<x.second<<" ";
    }
   
   cout<<endl;

    
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