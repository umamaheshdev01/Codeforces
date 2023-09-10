#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void rotate(vector<int> & k)
{
    reverse(k.begin(),k.end());
    reverse(k.begin()+1,k.end());
}

void solve()
{
    int m,n;
    cin>>m>>n;

    vector<int> p;

    for(int i=0;i<n;i++)
    {
        p.push_back(i);
    }

    if(n==1)
    {
        for(int i=0;i<=m;i++)
        {
            cout<<0<<endl;
        }
        return;
    }

    cout<<min(m+1,n)<<endl;
    
    int i=0;
    for(;i<m-n+1;i++)
    {
        for(auto x:p)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }

    for(;i<m;i++)
    {
        rotate(p);
        for(auto x:p)
        {
            cout<<x<<" ";
        }
        cout<<endl;
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