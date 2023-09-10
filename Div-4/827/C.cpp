#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    string s[8];

    for(int i=0;i<8;i++)
    {
        cin>>s[i];
    }


    for(int i=0;i<8;i++)
    {
        
    int c1=0;
    int c2=0;

         for(int j=0;j<8;j++)
         {
             if(s[i][j]=='R')
             {
                c1++;
             }
             else
             {
                c2++;
             }
         }

         if(c1==8)
         {
            cout<<"R"<<endl;
            return;
         }

         if(c2==8)
         {
            cout<<"B"<<endl;
            return;
         }
    }



 for(int j=0;j<8;j++)
    {
        
    int c1=0;
    int c2=0;
    
         for(int i=0;i<8;i++)
         {
             if(s[i][j]=='R')
             {
                c1++;
             }
             else
             {
                c2++;
             }
         }

         if(c1==8)
         {
            cout<<"R"<<endl;
            return;
         }

         if(c2==8)
         {
            cout<<"B"<<endl;
            return;
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