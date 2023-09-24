#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int m,n;
    cin>>m>>n;

    string s;
    cin>>s;

    int count =0;

    int i=0;
    for(;i<=m-n;i++)
    {
        if(s[i]=='B')
        {
            count+=1;
            for(int j=0;j<n;j++)
            {
                if(s[i+j]=='B')
                {
                    s[i+j]='W';
                }
            }
        }
    }

    for(;i<m;i++)
    {
        if(s[i]=='B')
        {
            count+=1;
            break;
        }
    }

    cout<<count<<endl;
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