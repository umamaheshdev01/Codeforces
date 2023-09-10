#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    char a;
    cin>>a;

    string s  = "codeforces";

    for(int i=0;i<s.length();i++)
    {
        if(a==s[i])
        {
            cout<<"YES"<<endl;
            return;
        }
    }

    cout<<"NO"<<endl;
    
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