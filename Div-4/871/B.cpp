#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    vector<int> k;
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int f;
        cin>>f;
        k.push_back(f);
    }

    int count;

    if(k[0])
    {
        count =0;
    }
    else
    {
        count =1;
    }

    int best = count;

    for(int i=1;i<k.size();i++)
    {
       

        if(!(k[i]+k[i-1]))
        {
            count++;
        }
        else
        {
            if(k[i])
            {
                count =0;
            }
            else
            {
                count =1;
            }
        }

        best = max(best,count);
    }

    cout<<best<<endl;
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