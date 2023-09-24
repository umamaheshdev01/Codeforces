#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll small(vector<ll> A,ll start)
{
        ll smallest = *min_element(A.begin()+start,A.end());

        for(ll i=A.size();i>=1;i--)
        {
            if(A[i]==smallest)
            {
                return i;
            }
        }

        return start;
}

void solve()
{
    ll n;cin>>n;
    vector<ll> A(n+1,0);

    for(int i=1;i<n+1;i++)
    {
         cin>>A[i];
    }

    ll f;
    cin>>f;

    int smallest = small(A,1);

    vector<ll> ans(n+1,0);

    while(f>0)
    {
        if(f>2*A[smallest] || f==A[smallest])
        {
               for(int i=1;i<=smallest;i++)
               {
                  ans[i]+=1;
               }

               f-=A[smallest];
        }
        else
        {
               smallest = small(A,smallest);
        }
    }

    for(ll i=1;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
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