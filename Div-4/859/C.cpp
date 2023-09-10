#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    unordered_map<char,vector<int>> m;

    for(int i=0;i<s.length();i++)
    {
        char c= s[i];
        m[c].push_back(i);
    }

    
    for(auto x:m)
    {
        vector<int> p = x.second;
        
        if(p.size()==1)
        {
            continue;
        }

        for(int i=0;i<p.size()-1;i++)
        {
            if((p[i+1]-p[i])%2 != 0)
            {
                cout<<"NO"<<endl;
                return;
            }
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