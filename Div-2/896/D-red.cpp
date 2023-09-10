#include <bits/stdc++.h>
using namespace std;
typedef long long ll;




bool checkpow(ll x)
{
    return x && (!(x&(x-1)));
}

bool check(ll k,unordered_map<ll,ll> &m)
{
    vector<int> bin;

    while(k)
    {
        if(k%2==0)
        {
            bin.push_back(0);
        }
        else
        {
            bin.push_back(1);
        }

        k/=2;
    }

    for(int i=0;i<bin.size();i++)
    {
        if(m[pow(2,bin[i])]>=1)
        {
            m[pow(2,bin[i])]--;
        }
        else{
            return false;
        }
    }

    return true;
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
        if(p[i]>mid)
        {
            ll dif = p[i] - mid;

            if(checkpow(dif))
            {
                m[dif]++;
            }
            else
            {
                cout<<"NO"<<endl;
                return;
            }
        }
    }

    for(ll i=0;i<n;i++)
    {
        if(p[i]<mid)
        {
            ll need = mid - p[i];

            if(check(need,m))
            {
                continue;
            }
            else
            {
                cout<<"NO"<<endl;
                return;
            }
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