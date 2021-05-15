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
int dp[5001][5001];
int func(string &s, string &t, int m , int n){
	if(m==s.size())return t.size()-n;
	if(n==t.size()) return s.size()-m;
	if(dp[m][n]!=-1) return dp[m][n];
	if(s[m]==t[n]) return func(s,t,m+1,n+1);
	int a= func(s,t,m+1,n);
	int b= func(s,t,m,n+1);
	int c= func(s,t,m+1,n+1);

	return dp[m][n]= 1+min(a,min(b,c));
	}
void solve(){
	memset(dp,-1,sizeof(dp));
	string s,t;
	cin>>s;
	cin>>t;
	cout<<func(s,t,0,0);
	}
int main(){
	int T=1;
	//cin>>T;
	while(T--)
	solve();
}
