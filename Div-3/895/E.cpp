#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


vector<ll> countZero(string s)
{
    vector<ll> k;

    for(int i=0;i<s.length();i++)
    {
            if(s[i]=='0')
            {
                k.push_back(i);
            }
    }

    return k;
}

vector<ll> countOne(string s)
{
    vector<ll> k;

    for(int i=0;i<s.length();i++)
    {
            if(s[i]=='1')
            {
                k.push_back(i);
            }
    }

    return k;
}


char invert(char a)
{
    if(a=='0')
    {
        return '1';
    }

    return '0';
}





void solve()
{
    ll n;
    cin>>n;

    vector<int> p;

    for(int i=0;i<n;i++)
    {
        int r;
        cin>>r;
        p.push_back(r);
    }

    string s;
    cin>>s;

    ll m;
    cin>>m;


    vector<ll> ansv;

    while(m--)
    {
        ll first;
        cin>>first;

        if(first==2)
        {
             ll second;
             cin>>second;

             if(second==0)
             {
                   vector<ll> f = countZero(s);

                   int ans=0;

                   for(int i=0;i<f.size();i++)
                   {
                      ans^=p[f[i]];
                   }
                   

                   ansv.push_back(ans);
             }
             else
             {
                vector<ll> f = countOne(s);

                   int ans=0;

                   for(int i=0;i<f.size();i++)
                   {
                      ans^=p[f[i]];
                   }


                
                   ansv.push_back(ans);
             }

             

        }
        else
        {
                ll start,end;

                cin>>start>>end;

                for(int i=start-1;i<=end-1;i++)
                {
                    s[i]= invert(s[i]);
                }

            
        }
    }

    for(auto x:ansv)
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