#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n,k,x;
    cin>>n>>k>>x;

    if(k>x && x!=k-1)
    {
       cout<<-1<<endl;
       return;
    }

    if(n<k)
    {
        cout<<-1<<endl;
        return;
    }

    int sum =0;

    for(int i=0;i<k;i++)
    {
        sum+=i;
    }

    int extra = n-k;

    if(x!=k)
    {
        sum+=x*extra;
    }
    else
    {
        sum+=(x-1)*extra;
    }

    cout<<sum<<endl;
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