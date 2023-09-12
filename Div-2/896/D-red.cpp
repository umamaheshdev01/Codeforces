#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



ll next_powert(ll x)
{
    ll c = 0;

    while(x)
    {
        c++;
        x>>=1;
    }

    return 1<<c;
}

bool checkup(ll x,pair<ll,ll> &ff)
{
    ll k = next_powert(x);
    
    ll p =k;


    while(k)
    {
        if(p-k==x)
        {
            ff.first=p;
            ff.second=k;
            return true;
        }

        k/=2;
    }

    return false;
}





void solve()
{
    ll n;
    cin>>n;

    vector<ll> p;
    ll sum=0;

    for(ll i=0;i<n;i++)
    {
        ll k;cin>>k;
        p.push_back(k);
        sum+=k;
    }

    if(sum%n != 0)
    {
          cout<<"NO"<<endl;
          return;
    }

    ll mid = sum/n;
    
    
     unordered_map<ll,ll> m;

    for(ll i=0;i<n;i++)
    {
       int diff = abs(p[i]-mid);

       if(diff==0)
       {
        continue;
       }

       pair<ll,ll> ff;

       if(!checkup(diff,ff))
       {
          cout<<"NO"<<endl;
          return;
       }
       else
       {
          if(p[i]>mid)
          {
             m[ff.first]++;
             m[ff.second]--;
          }
          else{
            m[ff.first]--;
            m[ff.second]++;
          }
          
       }
    }


    for(auto x:m)
    {
        if(x.second !=0)
        {
            cout<<"NO"<<endl;
            return;
        }
    }

    
cout<<"YES"<<endl;



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