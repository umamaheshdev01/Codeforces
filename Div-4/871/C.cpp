#include <bits/stdc++.h>
using namespace std;
#define all(v)  v.begin(),v.end()
#define INF 100000000
typedef long long ll;


void solve()
{ 
    int n;cin>>n;

    int k=INF,l=INF,m=INF;

    for(int i=0;i<n;i++)
    {
        int a;cin>>a;
        string s;cin>>s;

        if(s=="01")
        {
            k=min(k,a);
        }
        else if(s=="10")
        {
            l=min(l,a);
        }
        else if(s=="11")
        {
            m=min(m,a);
        }
    }

    int ans = min(k+l,m);

    if(ans>=INF)
    {
         cout<<-1<<endl;
         return;
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