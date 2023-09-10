#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n,a,b;
    cin>>n>>a>>b;


    ll lcm =  (a*b) / (__gcd(a,b));

    
    ll x = n/a - n/lcm;
    ll y = n/b - n/lcm;


   ll s1= (n*(n+1))/2 - ((n-x)*(n-x+1))/2;
   ll s2=(y*(y+1))/2;

   cout<<s1-s2<<endl;


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