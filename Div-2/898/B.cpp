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



void solve()
{
    ll n;
    cin>>n;

    vector<set<ll>>  setu;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;

        
        set<ll> s;
        for(int j=0;j<x;j++)
        {
            ll a;
            cin>>a;
            s.insert(a);

            
        }

        setu.push_back(s);

    }


    set<ll> k;

    for(auto x : setu)
    {
        set_union(k.begin(),k.end(),x.begin(),x.end(),k);
    }

    cout<<k.size();



    // for(int i=0;i<n;i++)
    // {
    //     set<ll> s;
    //     s = setu[i];

    //     for(int j=i+1;j<n;j++)
    //     {
    //          for(int k=j;k<n;k++)
    //          {

    //          }
    //     }
    // }




  

    

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