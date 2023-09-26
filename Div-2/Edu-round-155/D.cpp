#include <bits/stdc++.h>
using namespace std;

#define maxv(v) *max_element(v.begin(), v.end())
#define minv(v) *min_element(v.begin(), v.end())
#define maxa(arr, n) *max_element(arr, arr + (n))
#define mina(arr, n) *min_element(arr, arr + (n))
#define printArr(arr, n) for(int i=0;i<n;i++){cout<<arr[i]<<" ";}cout<<endl;
#define input(arr , n)   for(int i=0;i<n ; i++){cin >> arr[i] ;}
#define inputV(v,n) for(int i=0;i<n;i++){cin>>v[i];}
#define printV(v) for(int i=0;i<v.size();i++){cout<<v[i]<<" ";}cout<<endl;
#define rep(p,q,f) for(int i=p;i<q;i+=f)
#define ff first
#define ss second
#define pb push_back
#define pob pop_back()
#define sz size()
#define tp top()
#define ft front()
#define all(v) v.begin(), v.end()
#define srt(v) sort(all(v))
#define rev(v) reverse(all(v))

typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pll> vpll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef map<ll, ll> mll;
typedef map<char, ll> mcl;


void solve()
{
    ll n;
    cin>>n;
    vl v(n+1,0);

    rep(1,n+1,1)
    {
        cin>>v[i];
    }

    vl cum(n+1,0);
    cum[1]=v[1];

    rep(2,n+1,1)
    {
        cum[i]=v[i]^cum[i-1];
    }
    



    ll total = 0;


    for(int i=1;i<=n;i++)
    {

        for(int j=i;j<=n;j++)
        {
             cum[j]^=cum[i-1];
               ll ff = (j-i+1)*(cum[j]);
               total+=ff;
        }
    }


    cout<<total%998244353<<endl;


}

int main()
{
    solve();
}