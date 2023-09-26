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
    ll n;cin>>n;
    vpll k;
    vpll endui;
    vpll streni;

    for(int i=0;i<n;i++)
    {
        ll p,q;
        cin>>p>>q;
        k.pb({p,q});
        endui.pb({q,i});
        streni.pb({p,i});
    }

    vpll ne;
    vpll fucksi;
    vpll fuckei;

    if(n==1)
    {
        cout<<k[0].ff<<endl;
        return;
    }
   

    rep(0,n,1)
    {
        if(k[0].first<=k[i].first)
        {
             ne.push_back(k[i]);
             fuckei.pb(endui[i]);
             fucksi.pb(streni[i]);
        }
    }

    vl endur;
    rep(0,ne.size(),1)
    {
       endur.pb(ne[i].ss);
    }

    ll maxendur = maxv(endur);


    vl maxindi;
    vpll maxindistren;

    rep(0,fuckei.size(),1)
    {
        if(maxendur == fuckei[i].ff)
        {
            maxindi.pb(fuckei[i].ss);
            maxindistren.pb({fucksi[i].ff,fuckei[i].ss});
        }
    }
 
   

      
    if(maxindi.size()==1)
    {
        if(maxindi[0]==0)
        {
            cout<<k[0].ff<<endl;
            return;
        }
        else
        {
            cout<<-1<<endl;
            return;
        }
    }
    else
    {
        srt(maxindistren);
        rev(maxindistren);

        if(maxindistren[0].ss != 0)
        {
            cout<<-1<<endl;
            return;
        }
        else
        {
            if(maxindistren[0].ff == maxindistren[1].ff)
            {
                cout<<-1<<endl;
                return;
            }
            else
            {
                cout<<k[0].ff<<endl;
                return;
            }
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