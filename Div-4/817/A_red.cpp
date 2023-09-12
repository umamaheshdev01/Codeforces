#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int k = 'T'+'i'+'m'+'u'+'r';

    int n;
    cin>>n;

    // if(n!=5)
    // {
    //     cout<<"NO"<<endl;
    //     return;
    // }

    string s;
    cin>>s;

    int f;

    for(int i=0;i<s.length();i++)
    {
         f+=s[i];
    }

    if(k==f)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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