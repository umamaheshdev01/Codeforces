#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;

void rotate(vl &a,int n)
{
    int k = n % a.size();
    reverse(a.begin(),a.end());
    reverse(a.begin(),a.begin()+k);
    reverse(a.begin()+k,a.end());
}

vl solve()
{
    ll m,n;
    cin>>m>>n;

    vl v;
    for(int i=0;i<m;i++)
    {
        ll r;
        cin>>r;
        v.push_back(r);
    }

    vl a(m+1,0);
    for(int i=0;i<m;i++)
    {
        a[v[i]]=1;
    }

    ll index;
    for(index=0;index<a.size();index++)
    {
        if(a[index]==0)
        {
            break;
        }
    }

    v.push_back(index);

    rotate(v,n);
    v.pop_back();
    return v;



}

int main()
{
    ll n;
    cin>>n;

    while(n--)
    {
         vl k = solve();
         for(auto x:k)
         {
            cout<<x<<" ";
         }

         cout<<endl;
    }
}