#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll m,n;
    cin>>m>>n;

    vector<ll> k;

    for(int i=0;i<m;i++)
    {
       ll p;
       cin>>p;
       k.push_back(p);
    }

    sort(k.begin(),k.end());

    for(int i=0;i<k.size()-1;i++)
    {
        bool flag = false;
        if(k[i+1]>k[i])
        {
            ll diff = k[i+1]-k[i];

            for(int j=i;j>=0;j--)
            {
                   if(n<diff)
                   {
                      k[j]+=n;
                      n=0;
                   }
                   else
                   {
                      k[j]+=diff;
                      n-=diff;
                   }
                 
                   
                   if(n<=0)
                   {
                      flag =true;
                      break;
                   }
                   
                
            }

            if(flag)
            {
                break;
            }
        }
    }

    cout<<*min_element(k.begin(),k.end())+(ll)(n/m)<<endl;
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