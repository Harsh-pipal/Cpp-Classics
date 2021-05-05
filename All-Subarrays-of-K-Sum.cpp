#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define rep(i,a,b) for(int i=a;i<b;i++);

//All subarrays with given sum 
void solve(){
	ll n,ts;
	cin>>n>>ts;
	vector<ll>v(n);
	ll cnt=0;
	for(int i=0;i<n;i++)
		cin>>v[i];
	map<ll,ll>mp;
	mp[0]=1;

	ll initial_sum=0;
	for(int i=0;i<n;i++){
		initial_sum+=v[i];
		cnt+=mp[initial_sum-ts];
		mp[initial_sum]++;
		
		
	}
	cout<<cnt;
}


int main(){
	int t=1;
	//cin>>t;
	while(t--)
	solve();
}
