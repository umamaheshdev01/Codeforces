#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n,k,x;
    cin>>n>>k>>x;

    if(k>x && x!=k-1)
    {
       cout<<-1;
       return;
    }

    if(n<k)
    {
        cout<<-1;
        return;
    }

    ll sum =0;

    for(ll i=0;i<k;i++)
    {
        sum+=i;
    }

    ll extra = n-k;

    if(x!=k)
    {
        sum+=x*extra;
    }
    else
    {
        sum+=(x-1)*extra;
    }

    cout<<sum<<endl;
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