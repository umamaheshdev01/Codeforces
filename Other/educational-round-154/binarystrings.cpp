#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{

    string m,n;
    cin>>m>>n;

    bool flag = false;

    for(int i=0;i<m.length()-1;i++)
    {
        if(m[i]=='0' && m[i+1]=='1' && n[i]=='0' && n[i+1]=='1')
        {
            flag = true;
        }
    }

    if(flag)
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