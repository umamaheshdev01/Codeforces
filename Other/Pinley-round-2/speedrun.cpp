#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+10;
vector<int>e[N];
ll dis[N];
int deg[N],a[N];
int n,m,k,x,y,T;
void bfs(){
	queue<int>q;
	for (int i=1;i<=n;i++) if (!deg[i]) q.push(i);
	while (!q.empty()){
		int t=q.front(); q.pop();
		for (int i=0;i<e[t].size();i++){
			int u=e[t][i];
			dis[u]=max(dis[u],dis[t]+(a[u]<=a[t]?a[t]-a[u]:a[t]-a[u]+k));
			deg[u]--;
			if (!deg[u]){
				q.push(u);
			}
		}
	}
} 

// this is not my own code

int main(){
	scanf("%d",&T);
	while (T--){
		scanf("%d%d%d",&n,&m,&k);
		for (int i=1;i<=n;i++) dis[i]=0,e[i].clear(),deg[i]=0;
		for (int i=1;i<=n;i++) scanf("%d",&a[i]);
		for (int i=1;i<=m;i++){
			scanf("%d%d",&x,&y);
			e[y].push_back(x);
			deg[x]++;
		}
		bfs();
		ll smax=0;
		vector<pair<int,ll>>ans;
		for (int i=1;i<=n;i++) if (e[i].empty()){
			smax=max(smax,dis[i]+(ll)a[i]);
			ans.push_back(make_pair(a[i],dis[i]));
		}
		sort(ans.begin(),ans.end());
		ll sf=smax-ans[0].first;
		for (int i=1;i<ans.size();i++){
			smax=max(smax,ans[i-1].second+(ll)ans[i-1].first+k);
			sf=min(sf,smax-ans[i].first);
		}
		printf("%lld\n",sf);
	}
}