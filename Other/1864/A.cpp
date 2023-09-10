#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll x,y,n;

    cin>>x>>y>>n;

    vector<ll> v(n);
    v[n-1]=y;
    v[0]=x;
    int c =1;

    for(int i=n-2;i>=1;i--)
    {
        v[i]=v[i+1]-c;
        c++;
    }

    if((v[1]-v[0]) > (v[2]-v[1]))
    {
        for(auto x : v)
    {
        cout<<x<<" ";
    }
    
    }
    else
    {
        cout<<-1<<endl;
    }

    
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