#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define ll long long 
#define INF 1000000000
#define nl '\n'
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
using namespace std;
 
ll OptimalStrategy(ll n , ll arr[]){
 
	ll dp[n][n];
	for(ll gap=0;gap<n;gap++){
		for(ll i=0,j=gap;j<n;j++,i++){
			if(gap==0){
				dp[i][j]=arr[i];
			}
			else if(gap==1){
				dp[i][j]=max(arr[i],arr[j]);
			}
			else{
				ll op1= arr[i] + min(dp[i+2][j],dp[i+1][j-1]);
				ll op2= arr[j] + min(dp[i+1][j-1],dp[i][j-2]);
 
				ll choose= max(op1,op2);
				dp[i][j]=choose;
			}
		}
	}
	return dp[0][n-1];
	
}
void solve(){
	ll n;
	cin>>n;
	ll arr[n];
	for(ll i=0;i<n;i++)cin>>arr[i];
	
	cout<<OptimalStrategy(n,arr);	
}
int main(){
	int t=1;
	//cin>>t;
	while(t--)
		solve();
}