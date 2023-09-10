#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;

    int small,large;

    if(a>b)
    {
        if(a>c)
        {
            large = a;
        }
        else
        {
            large = c;
        }

        if(b<c)
        {
            small = b;
        }
        else
        {
            small = c;
        }
    }
    else
    {
        if(b>c)
        {
            large = b;
        }
        else
        {
              large=c;
        }

        if(a<c)
        {
            small =a ;
        }
        else
        {
            small =c;
        }
    }

    cout<<a+b+c-large-small<<endl;
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