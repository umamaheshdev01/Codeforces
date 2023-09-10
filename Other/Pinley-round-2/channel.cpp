#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n,a,q;
    cin>>n>>a>>q;

    if(n==a)
    {
        cout<<"YES";
        return;
    }

    string sign;
    cin>>sign;

    ll maxi = a;

    for(int i=0;i<q;i++)
    {
         if(sign[i]=='+')
         {
            a++;
            maxi++;
         }
         else
         {
            a--;
         }

         if(a==n)
         {
            cout<<"YES";
            return;
         }
    }

    if(maxi>=n)
    {
        cout<<"MAYBE";
        return;
    }

    cout<<"NO";
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