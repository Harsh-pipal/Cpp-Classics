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
 
int rectangle(int a, int b){
	int dp[a+1][b+1];
 
	for(int height=1; height<=a;height++){
 
		for(int width =1;width<=b;width++){
 
			if(height==width){
				dp[height][width]= 0;
			}
			else{
				int ans=1e8;
				for(int i=1;i<width;i++){
					ans=min(ans,1+dp[height][width-i]+dp[height][i]);
				}
				for(int i=1;i<height;i++){
					ans=min(ans,1+dp[height-i][width]+dp[i][width]);
				}
				dp[height][width]=ans;
			}
		}
	}
	return dp[a][b];
}
void solve(){
	int a,b;
	cin>>a>>b;
	cout<<rectangle(a,b);
 
	
}
int main(){
	int t=1;
	//cin>>t;
	while(t--)
		solve();
}