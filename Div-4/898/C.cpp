#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll score =0;
    string s1;
    cin>>s1;

    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]=='X')
        {
           score+=1;
        }
    }

    string s2;cin>>s2;
    for(int i=0;i<s2.size();i++)
    {
        if(s2[i]=='X')
        {
           if(i==0 || i==9)
           {
              score+=1;
           }
           else
           {
            score+=2;
           }
        }
    }

    string s3;cin>>s3;
    for(int i=0;i<s3.size();i++)
    {
        if(s3[i]=='X')
        {
           if(i==0 || i==9)
           {
              score+=1;
           }
           else if(i==1 || i==8)
           {
            score+=2;
           }
           else
           {
            score+=3;
           }
        }
    }


    string s4;cin>>s4;
    for(int i=0;i<10;i++)
    {
        if(s4[i]=='X')
        {
           if(i==0 || i==9)
           {
              score+=1;
           }
           else if(i==1 || i==8)
           {
            score+=2;
           }
           else if(i==2 || i==7)
           {
            score+=3;
           }
           else
           {
            score+=4;
           }
        }
    }


    string s5;cin>>s5;

     for(int i=0;i<10;i++)
    {
        if(s5[i]=='X')
        {
           if(i==0 || i==9)
           {
              score+=1;
           }
           else if(i==1 || i==8)
           {
            score+=2;
           }
           else if(i==2 || i==7)
           {
            score+=3;
           }
           else if(i==3 || i==6)
           {
            score+=4;
           }
           else
           {
            score+=5;
           }
        }
    }

    string s6;cin>>s6;

     for(int i=0;i<10;i++)
    {
        if(s6[i]=='X')
        {
           if(i==0 || i==9)
           {
              score+=1;
           }
           else if(i==1 || i==8)
           {
            score+=2;
           }
           else if(i==2 || i==7)
           {
            score+=3;
           }
           else if(i==3 || i==6)
           {
            score+=4;
           }
           else
           {
            score+=5;
           }
        }
    }

    string s7;cin>>s7;
    for(int i=0;i<10;i++)
    {
        if(s7[i]=='X')
        {
           if(i==0 || i==9)
           {
              score+=1;
           }
           else if(i==1 || i==8)
           {
            score+=2;
           }
           else if(i==2 || i==7)
           {
            score+=3;
           }
           else
           {
            score+=4;
           }
        }
    }

    string s8;cin>>s8;
    for(int i=0;i<10;i++)
    {
        if(s8[i]=='X')
        {
           if(i==0 || i==9)
           {
              score+=1;
           }
           else if(i==1 || i==8)
           {
            score+=2;
           }
           else
           {
            score+=3;
           }
        }
    }

    string s9;cin>>s9;
    for(int i=0;i<10;i++)
    {
        if(s9[i]=='X')
        {
           if(i==0 || i==9)
           {
              score+=1;
           }
           else
           {
            score+=2;
           }
        }
    }


    string s11;
    cin>>s11;

    for(int i=0;i<s11.size();i++)
    {
        if(s11[i]=='X')
        {
           score+=1;
        }
    }


    cout<<score<<endl;



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