#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool solve()
{
    string k;
    cin>>k;
    vector<int> v;

    stack<int> s;

    for(int i=0;i<k.size();i++)
    {
        char c = k[i];

        if(c=='+')
        {
             if(s.empty())
             {
                s.push(1);
             }
             else if(s.top()==0)
             {
                s.push(0);
             }
             else
             {
                s.push(-1);
             }
        }
        else if(c=='-')
        {
           if(s.empty())
           {
              return false;
           }
           else if(s.top()==1)
           {
              s.pop();

              if(!s.empty()) s.top()=1; //imp line
             
           }
           else
           {
              s.pop();
           }

        }
        else if(c=='0')
        {

            if(s.size()<2)
            {
                return false;
            }
            else if(s.top()==1)
            {
                return false;
            }
            else
            {
                s.top()=0;
            }


        }
        else
        {
            if(s.size()<2)
            {
                continue; // imp line
            }
            else if(s.top()==0)
            {
                return false;
            }
            else
            {
                s.top()=1;
            }

        }
    }

   

    return true;

}

int main()
{
    ll n;
    cin>>n;

    while(n--)
    {
        bool k =solve();

        if(k)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}