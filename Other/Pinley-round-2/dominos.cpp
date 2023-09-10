#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef string str;
typedef vector<str> vs;

vs input()
{
    vs k;
    ll m,n;
    cin>>m>>n;

    for(int i=0;i<m;i++)
    {
        str p;
        cin>>p;
        k.push_back(p);
    }

    return k;
}

bool valid(vs k)
{
    int m = k.size();
    int n = k[0].length();

    //U
    for(int i=0;i<m;i++)
    {
        int count = 0;

        for(int j=0;j<n;j++)
        {
            if(k[i][j]=='U')
            {
                count++;
            }
        }

        if(count%2 != 0)
        {
            return false;
        }
    }

    //L
    for(int j=0;j<n;j++)
    {
        int count = 0;

        for(int i=0;i<m;i++)
        {
            if(k[i][j]=='L')
            {
                  count++;
            }
        }

        if(count%2 != 0)
        {
            return false;
        }
    }

    return true;


}

vs solve(vs k)
{
    int m = k.size();
    int n = k[0].length();

    vs p = k;

    //U
    for(int i=0;i<m;i++)
    {
        int count = 0;

        for(int j=0;j<n;j++)
        {
            if(k[i][j]=='U')
            {
                if(count%2==0)
                {
                    p[i][j]='W';
                    p[i+1][j]='B';
                }
                else
                {
                    p[i][j]='B';
                    p[i+1][j]='W';
                }

                count++;
            }
        }

    }

    //L
    for(int j=0;j<n;j++)
    {
        int count = 0;

        for(int i=0;i<m;i++)
        {
            if(k[i][j]=='L')
            {
                if(count%2==0)
                {
                    p[i][j]='W';
                    p[i][j+1]='B';
                }
                else
                {
                    p[i][j]='B';
                    p[i][j+1]='W';
                }

                count++;
            }
        }

      
    }

    return p;

}

int main()
{

    ll n;
    cin>>n;

    while(n--)
    {
        vs k = input();

        if(valid(k))
        {
            vs p = solve(k);

            for(auto x:p)
            {
                cout<<x<<endl;
            }

        }
        else
        {
            cout<<-1<<endl;
        }
        
    }


}