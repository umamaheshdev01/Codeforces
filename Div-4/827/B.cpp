#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin>>n;

    vector<int> k;

    for(int i=0;i<n;i++)
    {
        int p;cin>>p;
        k.push_back(p);
    }

    sort(k.begin(),k.end());

    for(int i=1;i<n;i++)
    {
        if(k[i]==k[i-1])
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