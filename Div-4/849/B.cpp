#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{

    int n;
    cin>>n;
    string s;
    cin>>s;

    int x=0,y=0;

    for(int i=0;i<s.length();i++)
    {
        char c = s[i];

        if(c=='U')
        {
            y+=1;
        }
        else if(c=='D')
        {
            y-=1;
        }
        else if(c=='L')
        {
            x-=1;
        }
        else
        {
            x+=1;
        }


        if(x==1 and y==1)
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