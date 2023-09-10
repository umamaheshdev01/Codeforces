#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    int i=0;
    int j=s.length()-1;
    
    int count = 0;
    while(s[i]!=s[j] && i<j)
    {
        count+=2;
        i++;
        j--;
    }

    cout<<s.length()-count<<endl;
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