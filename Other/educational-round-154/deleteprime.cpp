#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    string k;
    cin>>k;

    bool one=false,three=false;
    for(int i=0;i<k.size();i++)
    {
        if(k[i]=='1')
        {
            one=true;
            break;
        }

        if(k[i]=='3')
        {
            three=true;
            break;
        }
    }

    if(one)
    {
        cout<<"13"<<endl;
    }
    else
    {
        cout<<"31"<<endl;
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