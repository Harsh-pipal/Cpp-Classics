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


void solve(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	set <int>s;
	for (int i=0;i<n;i++){
		if(s.size()==0){
			s.insert(arr[i]);
			continue;
		}
		vi temp;
		for(auto it=s.begin();it!=s.end();it++){
			
			temp.pb(*it+arr[i]);
			
		}
		temp.pb(arr[i]);
		for(int i=0;i<temp.size();i++){
			s.insert(temp[i]);
		}
	
		


	}
	cout<<s.size()<<nl;
	for(auto i :s){
		cout<<i<<" ";
	}
	
}
int main(){
	int t=1;
	//cin>>t;
	while(t--)
		solve();
}
