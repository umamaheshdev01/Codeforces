#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    unordered_map<char,bool> m1;
    unordered_map<char,bool> m2;

    int i,j;

    for(i=0;i<s.length();i++)
    {
        if(m1.find(s[i])==m1.end())
        {
            m1[s[i]]=true;
        }
        else
        {
            break;
        }

    }

    for(j=s.length()-1;j>=0;j--)
    {
           if(m2.find(s[j])==m2.end())
           {
             m2[s[j]]=true;
           }
           else
           {
              break;
           }
    }

    for(;i<=j;i++)
    {
        if(m1.find(s[i])==m1.end())
        {
               m1[s[i]]=true;
        }
    }


    cout<<m1.size()+m2.size()<<endl;
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