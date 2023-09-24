#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n;
    cin>>n;

    vector<ll> k;

    for(ll i=0;i<n;i++)
    {
        ll p;
        cin>>p;
        k.push_back(p);
    }

    sort(k.begin(),k.end());

    ll ans=1+k[0];

    for(ll i=1;i<k.size();i++)
    {
         ans*=k[i];
    }


    cout<<ans<<endl;


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