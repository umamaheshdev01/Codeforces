#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;

void solve()
{
    ll n;
    cin>>n;

    vl q;
    for(int i=0;i<n;i++)
    {
        ll r;
        cin>>r;
        q.push_back(r);
    }

    vl a(n+1,0);

    for(int i=0;i<n;i++)
    {
        a[q[i]]=i;
    }

    int count = 0;

    for(int i=0;i<n;i++)
    {
        if(q[i]!=0)
        {
           if(a[q[i]]<a[q[i]-1])
           {
                count++;
           }
        }
    }

    cout<<count<<endl;


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