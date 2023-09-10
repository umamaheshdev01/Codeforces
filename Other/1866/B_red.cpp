#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int modd = 1000;
const int md = 998244353;

void solve()
{
 
 int a[modd];
 int n;
 cin>>n;

 int T[modd]={0};

 for(int i=0;i<n;i++)
 {
     cin>>a[i];
 }

 for(int i=0;i<n;i++)
 {
    int f;
    cin>>f;
    T[a[i]]+=f;
 }

int m;
cin>>m;
int b[modd];

 for(int i=0;i<m;i++)
 {
    cin>>b[i];
 }

 for(int i=0;i<m;i++)
 {
    int f;
    cin>>f;
    T[b[i]]-=f;
 }

 long long ans = 1;

 for(int i=0;i<modd;i++)
 {
    if(T[i]<0)
    {
        cout<<0;
        return;
    }
    else if(T[i])
    {
        ans<<=1;
        ans%=md;
    }
 }

 cout<<ans;
    
}

int main()
{
    solve();
}