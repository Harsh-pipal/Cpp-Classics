#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define rep(i,a,b) for(int i=a;i<b;i++);

//Nearest smallest values //stack implementation
void solve(){
	int n;
	cin>>n;
	stack<pair<int,int>>stk;
	vector<int>v(n);
	for(int i=-0;i<n;i++)cin>>v[i];

	for(int i=0;i<n;i++){
		while(stk.size()>0 and stk.top().first>=v[i]){
			stk.pop();
		}
		if(stk.size()>0){
			cout<<stk.top().second<<" ";
		}
		else{
			cout<<0<<" ";	
			
		}
		stk.push({v[i],i+1});
	}

}


int main(){
	int t=1;
	//cin>>t;
	while(t--)
	solve();
}
