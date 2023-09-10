#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll distance(pair<ll,ll> k,pair<ll,ll> p)
{
    return abs(k.first - p.first )+abs(k.second - p.second);
}


void solve()
{
    
    int n,k,a,b;
    cin>>n>>k>>a>>b;

    vector<pair<ll,ll>> t;


    for(ll i=0;i<n;i++)
    {
         ll p,q;
         cin>>p>>q;
         t.push_back({p,q});
    }

    
    if(a<=k && b<=k)
    {
        cout<<0<<endl;
        return;
    }

    ll ans1= distance(t[a-1],t[b-1]);

    ll min1 = 1e15;
    ll min2 = 1e15;

    for(ll i=0;i<k;i++)
    {
          min1 = min(min1,distance(t[i],t[a-1]));
          min2 = min(min2,distance(t[i],t[b-1]));
    }


    cout<<min(ans1,min1+min2)<<endl;



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