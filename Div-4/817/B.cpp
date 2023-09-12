#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin>>n;

    string s,p;
    cin>>s>>p;
    
    for(int i=0;i<n;i++)
    {
        if(s[i]=='G')
        {
            s[i]='B';
        }

        if(p[i]=='G')
        {
            p[i]='B';
        }
    }

    for(int i =0;i<n;i++)
    {
        if(s[i]!=p[i])
        {
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;


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