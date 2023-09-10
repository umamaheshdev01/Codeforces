#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{

    int a,b,c;
    cin>>a>>b>>c;

    bool k = (a+b==c) || (b+c==a) || (c+a==b);

    if(k)
    {
        cout<<"YES"<<endl;
    }
    else{
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