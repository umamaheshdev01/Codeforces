#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    int c = *max_element(s.begin(),s.end());
    
    cout<<c-96<<endl;


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