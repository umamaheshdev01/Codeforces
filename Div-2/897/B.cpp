#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll count(string s)
{
    int count = 0;

    ll i =0;
    ll j =s.length() -1;

    while(i<=j)
    {
        if(s[i]!=s[j])
        {
            count++;
        }


        i++;
        j--;
    }

    return count;
}

void solve()
{
    ll n;
    cin>>n;

    string s;
    cin>>s;

    ll pk = count(s);


    vector<int> k(n+1,0);

    if(n%2==0)
    {
        for(int i=pk;i<=n-pk;i+=2)
        {
            k[i]=1;
        }
    }
    else
    {
        for(int i=pk;i<=n-pk;i++)
        {
            k[i]=1;
        }
    }


    for(auto x:k)
    {
        cout<<x;
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