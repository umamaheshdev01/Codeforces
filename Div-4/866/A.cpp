#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;

    if((a+b)>=10 || (b+c)>=10 || (c+a)>=10)
    {
        cout<<"YES"<<endl;;
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