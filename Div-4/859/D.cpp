
#include<bits/stdc++.h>
#define int long long int
using namespace std;
signed main(){
	int t;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n>>q;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int pfsum[n+1];
		pfsum[0]=0;
		for(int i=1;i<=n;i++){
			pfsum[i]=pfsum[i-1]+a[i-1];
		}
		int sum=pfsum[n];
		while(q--){
			int l,r,k;
			cin>>l>>r>>k;
			int sub=pfsum[r]-pfsum[l-1];
			int add=(r-l+1)*k;
			int temp=sum+add-sub;
			if(temp&1) cout<<"YES"<<"\n";
			else	   cout<<"NO"<<"\n";
		}
	}
	return 0;
}