#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isPrime(ll n)
{
    if(n<=1)
    {
        return false;
    }
    
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }

    return true;

}

void solve()
{
    ll a,b;
    cin>>a>>b;

    
      
    if(a<=2 && b<=3)
    {
        cout<<-1<<endl;
        return;
    }

    if(a==b && a%2==0)
    {
        cout<<a/2<<" "<<a/2<<endl;
        return;
    }

    if(a==b && a%2!=0)
    {
        if(isPrime(a))
        {
            cout<<-1<<endl;
            return;
        }

        for(ll i=a-2;i>2;i--)
        {
             if( __gcd(a-i,a)!=1)
             {
                cout<<i<<" "<<a-i<<endl;
                return;
             }
        }
    }


    if(2*a <= b)
    {
        if(a!=1)
        {
            cout<<a<<" "<<a<<endl;
        }
        else
        {
            cout<<a+1<<" "<<a+1<<endl; 
        }
    }
    else
    {
        if(a%2==0)
        {
            cout<<2<<" "<<a-2<<endl;
        }
        else
        {
            cout<<a-1<<" "<<2<<endl;
        }
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