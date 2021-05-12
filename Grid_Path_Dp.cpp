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
ll gcd(ll a, ll b){
	if(b==0){
		return a;

	}
	return gcd(b,a%b);
}

 
void solve(){
	ll n;
	cin>>n;
	char arr[n+1][n+1];
	for(int i=1;i<n+1;i++){
		for(int j=1;j<n+1;j++){
			cin>>arr[i][j];
		}
	}
	int dp[n+1][n+1];
	dp[n][n]=1;
	for(int i=n;i>=1;i--){
		for(int j=n;j>=1;j--){
			if (i==n and j==n)
				dp[i][j]=1;

			else{
				int r,l;
				if(i!=n){
					 r=dp[i+1][j];
				}
				else{
					 r=0;
				}

				if (j!=n){
					 l=dp[i][j+1];
				}
				else{
					 l=0;
				}

				dp[i][j]=(r+l)%mod;
				if(arr[i][j]=='*'){
					dp[i][j]=0;

				}
			}
		}
	}
	if(arr[n][n]=='*'){
		cout<<0<<nl;
	}
	else
		cout<<dp[1][1];


	
} 
int main(){
	int t=1;
	//cin>>t;
	while(t--)
	solve();
}
