#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    string k="";

    for(int i=0;i<8;i++)
    {
        string f;
        cin>>f;
        for(int j=0;j<f.length();j++)
        {
              if(f[j]!='.')
              {
                  k.push_back(f[j]);
              }
        }
    }

    cout<<k<<endl;
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