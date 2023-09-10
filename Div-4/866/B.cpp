#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n;
    cin>>n;

    vector<pair<int,int>> k;

    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;

        if(a<=10)
        {
            k.push_back({b,i+1});
        }
    }

    sort(k.begin(),k.end());

    

    cout<<k[k.size()-1].second<<endl;


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