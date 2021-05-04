#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define rep(i,a,b) for(int i=a;i<b;i++);

//Dice combinations

ll dp[1000001];
ll mod=1e9+7;                                     //summation dp[i]=dp[i-1]+dp[i-2]+........


void solve(){
	ll n;
	cin>>n;

	dp[0]=1;
	for(int i=1;i<n+1;i++){
		for(int j=1;j<=6;j++){
			if (j>i)break;
			else
				dp[i]=(dp[i]+dp[i-j])%mod;
		}
	}
	cout<<dp[n];
}

int main(){
	int t=1;
	//cin>>t;
	while(t--)
	solve();
}