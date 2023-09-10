#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;

    if(m%2==0)
    {
        sort(s.begin(),s.end());
        cout<<s<<endl;
        return;
    }
    else
    {
        vector<char> ss[2];

        for(int i=0;i<s.length();i++)
        {
            if(i%2==0)
            {
                ss[0].push_back(s[i]);
            }
            else
            {
                ss[1].push_back(s[i]);
            }
        }

        sort(ss[0].begin(),ss[0].end());
        sort(ss[1].begin(),ss[1].end());

        for(int i=0;i<s.length();i++)
        {
            s[i]=ss[i%2][i/2];
        }


        cout<<s<<endl;
        return;


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