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

    ll sum1=0;
    vl a1;

    rep(0,n,1)
    {
        ll p;cin>>p;
        a1.push_back(p);
        sum1+=p;
    }

    ll sum2=0;
    vl a2;

    rep(0,n,1)
    {
        ll p;cin>>p;
        a2.push_back(p);
        sum2+=p;
    }


    ll min1 = minv(a1);
    ll min2 = minv(a2);



    cout<<min(sum1+n*min2,sum2+n*min1)<<endl;
    
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