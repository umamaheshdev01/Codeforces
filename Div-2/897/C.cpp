#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll num(vector<ll> k)
{
    sort(k.begin(),k.end());

    ll i =0;

    for(;i<k.size();i++)
    {
       if(k[i]!=i)
       {
        return i;
       }
    }

    return i;
}

void solve()
{
    ll n;
    cin>>n;

    vector<ll> k;

    for(ll i=0;i<n;i++)
    {
        ll p ;
        cin>>p;

        k.push_back(p);
    }


    ll miss = num(k);

    ll  x=0,y=0;

    ll kp=-2;

    while(y!=-1)
    {
        if(kp==-2)
        {
           cout<<miss<<endl;
        }
        else{
            cout<<kp<<endl;
        }

        cin>>y;
        kp=y;
        
        cout.flush();

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