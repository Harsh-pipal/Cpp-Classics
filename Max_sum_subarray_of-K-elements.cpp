#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Maximum sum of subarray with K elements (Sliding window technique)
void solve(){
	ll n,k;
	cin>>n>>k;
	vector<ll>v(n);

	for(ll i=0;i<n;i++)
		cin>>v[i];

	ll ans=INT_MIN;
	ll i=0;
	ll j=0;
	ll s=0;
	while(i<(n-k+1)){
		ll j=0;
		while(j<k){
			s+=v[i+j];
			j++;
		}
		ans=max(ans,s);
		i++;
		s=0;
	}
	cout<<ans<<endl;	
} 
 
int main(){
	int t=1;
	//cin>>t;
	while(t--)
	solve();
}