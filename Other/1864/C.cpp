#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int> binary(int i)
{
    vector<int> k;
    vector<int> kk;

    while(i)
    {
        if(i%2==0) k.push_back(0);
        else k.push_back(1);

        i/=2;
    }

    for(int i=0;i<k.size()-1;i++)
    {
        if(k[i]==1) kk.push_back(pow(2,i));
    }

    return kk;
}

void solve()
{
    int n;
    cin>>n;
    
    vector<int> k = binary(n);
    vector<int> p;

    p.push_back(n);

    for(int i=0;i<k.size();i++)
    {
        n-=k[i];
        p.push_back(n);
    }

    while(n)
    {
        n/=2;
        p.push_back(n);
        
         
    }

    p.pop_back();

    cout<<p.size()<<endl;

    for(auto x:p)
    {
        cout<<x<<" ";
    }

    cout<<endl;

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