#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int> k;

    for(int i=0;i<n;i++)
    {
        int f;
        cin>>f;
        k.push_back(f);
    }

    sort(k.begin(),k.end());

    int count =1;
    int best =1;

    for(int i=1;i<n;i++)
    {
        if(k[i]-k[i-1] > m)
        {
            count =1;
        }
        else
        {
            count++;
        }

        best = max(best,count);
    }

    cout<<n-best<<endl;
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