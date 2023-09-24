#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool repeat(vector<int> k)
{
    unordered_map<int,bool> m;

    for(int i=0;i<k.size();i++)
    {
        if(m.find(k[i])==m.end())
        {
            m[k[i]]=true;
        }
        else
        {
            return true;
        }
    } 

    return false;
}

bool check(vector<int> k)
{
    for(int i=0;i<k.size();i++)
    {
        if(i!=k[i])
        {
            return false;
        }
    }

    return true;
}

void solve()
{
    int m,n;
    cin>>m>>n;

    vector<int> v(m+1,0);
    vector<int> ff(m+1,0);

    for(int i=1;i<=m;i++)
    {
        cin>>v[i];
    }

    if(n==1)
    {
        if(check(v))
        {
            cout<<"YES"<<endl;
            return;
        }
        else
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    
    for(int i=1;i<=m;i++)
    {
        vector<int> p;
        p.push_back(i);

        for(int j=1;j<n;j++)
        {
            p.push_back(v[p.back()]);
            ff[i+j-1]=v[p.back()];
            
        }

        

        
        
        if(repeat(p))
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