#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define rep(i,a,b) for(int i=a;i<b;i++);
 
 
void solve(){
	int n;
	ll s;
	cin>>n>>s;
	vector<pair<ll,ll>>v;
	for(int i=0;i<n;i++){
		ll x;
		cin>>x;
		v.push_back({x,i});
	}
 
	if(n<3){
		cout<<"IMPOSSIBLE"<<endl;
	}
	else{                                                                                                 //using while loop
		sort(v.begin(),v.end());
		for(int i=0;i<n-2;i++){									      //Can use Binary search
			int l=i+1;
			int r=n-1;
			while(l<r){
				if(v[i].first+v[l].first+v[r].first==s){
					cout<<v[i].second+1<<" "<<v[l].second+1<<" "<<v[r].second+1;
					return;
				}
				else{
					if (v[i].first+v[l].first+v[r].first<s){
						l++;
					}
					else
						r--;
				}
 
			}
		}
		cout<<"IMPOSSIBLE";
	}
 
	
}
 
 
int main(){
	int t=1;
	//cin>>t;
	while(t--)
	solve();
}