#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin>>n;

    int a=0,b=0;

    for(int i=0;i<n;i++)
    {
        int f;
        cin>>f;

        if(f%2==0)
        {
            a+=f;
        }
        else
        {
            b+=f;
        }
    }

    if(a>b)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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