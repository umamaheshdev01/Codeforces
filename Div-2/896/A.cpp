#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin>>n;

    int ans =0;
    vector<int> v;

    for(int i=0;i<n;i++)
    {
           int p;
           cin>>p;
           v.push_back(p);
           ans^=p;
    }


    if(ans==0)
    {
        cout<<1<<endl;
        cout<<1<<" "<<n<<endl;
        return;
    }

    if(n%2==0)
    {
        cout<<2<<endl;
        cout<<1<<" "<<n<<endl;
        cout<<1<<" "<<n<<endl;
        return;
    }


    cout<<4<<endl;
    cout<<1<<" "<<2<<endl;
    cout<<1<<" "<<2<<endl;
    cout<<2<<" "<<n<<endl;
    cout<<2<<" "<<n<<endl;


   
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