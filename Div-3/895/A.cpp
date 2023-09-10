#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;

    c = 2*c;

    if(a==b)
    {
        cout<<0<<endl;
        return;
    }

    int e = max(a,b);
    int f = min(a,b);

    if((e-f)%c==0)
    {
        cout<<(e-f)/c<<endl;
    }
    else
    {
        cout<<(e-f)/c + 1<<endl;
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