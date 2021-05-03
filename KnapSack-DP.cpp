#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define rep(i,a,b) for(int i=a;i<b;i++);

//Knapsack Problem

int knapsack(int mw,int n,vector<int> &values,vector<int> &weight){
	int dp[n+1][mw+1];

	for(int i=0;i<=n;i++){
		for(int j=0;j<=mw;j++){

			if(i==0 or j==0){
				dp[i][j]=0;
			}
			else if(weight[i-1]<=j){
				dp[i][j]=max(dp[i-1][j],values[i-1]+dp[i-1][j-weight[i-1]]);
			}
			else{
				dp[i][j]=dp[i-1][j];
			}

		}
	}

	return dp[n][mw];
	
}

void solve(){
	int mw;
	vector<int>weight;
	vector<int>values;
	int n;
	cin>>n;
	cin>>mw;
	for(int i=0;i<n;i++){
		int c;
		cin>>c;
		weight.push_back(c);
	}

	for(int i=0;i<n;i++){
		int d;
		cin>>d;
		values.push_back(d);
	}


	cout<<knapsack(mw,n,values,weight)<<endl;
}


int main(){
	int t=1;
	//cin>>t;
	while(t--)
	solve();
}
