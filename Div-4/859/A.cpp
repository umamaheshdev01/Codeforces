#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;

    if((a+b==c))
    {
        cout<<"+"<<endl;
        return;
    }
    else
    {
        cout<<"-"<<endl;
        return;
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