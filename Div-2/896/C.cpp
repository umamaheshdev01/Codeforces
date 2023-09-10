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

    vector<int> k;
    for(int i=0;i<n;i++)
    {
        k.push_back(i);
    }

    if(n==1)
    {
        cout<<0<<endl;
    }
    else if(m>=n)
    {
        cout<<n<<endl;
    }
    else
    {
        cout<<m+1<<endl;
    }


    for(int i=0;i<m;i++)
    {
        for(auto x: k)
        {
            cout<<x<<" ";
        }
        cout<<endl;
        rotate(k);
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