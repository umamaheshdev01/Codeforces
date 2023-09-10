#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;

void solve()
{
    ll n;
    cin>>n;
    
    vl k;
    //input
    for(int i=0;i<n;i++)
    {
        ll r;
        cin>>r;
        k.push_back(r);
    }


    vl prefix(n,0);
    vl suffix(n,0);

    //suffix
    for(int i=n-2;i>=0;i--)
    {
        suffix[i] = suffix[i+1] + (k[i]>=k[i+1]);
    }

    //prefix important  - less hey toh x dedo else previous dedo
    ll x=1;
    for(int i=1;i<n;i++)
    {
        if(k[i]<=k[i-1])
        {
            prefix[i] = x;
        }
        else
        {
            prefix[i] = prefix[i-1];
        }

       x+= (k[i]>=k[i-1]);
    }



    ll mini = INT_MAX;

    for(int i=0;i<n;i++)
    {
        mini = min(mini,suffix[i]+prefix[i]);
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