#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define rep(i,a,b) for(int i=a;i<b;i++);
 
//All subarrays divisible by k

//Use whenever u get a negative remainder 

//explanation for +k -k

//eg for 7....if remainder is -3 then it is equivalent to +4 (-3+7)

// because 7n-3 = 7n-3+7-7

// 7n-3 =7 (n-1)+4

// 7n-3 = 7n'+ 4


void solve(){
	ll n;
	cin>>n;
	vector<ll>v(n);
	ll cnt=0;
	for(ll i=0;i<n;i++)
		cin>>v[i];
	map<ll,ll>mp;
	map<ll,ll>m2;
	mp[0]=1;
 	m2[0]=1;
	ll initial_sum=0;
	for(ll i=0;i<n;i++){
		initial_sum+=v[i];
		if(initial_sum%n>=0) {                    //for Negative remainder +n,-n trick to get modifies values 
		cnt+=mp[initial_sum%n];
		//mp[initial_sum]++;
		mp[initial_sum%n]++;
	}
	else{
		cnt+=mp[initial_sum%n+n];
		mp[initial_sum%n+n]++;
	}

		
		
		
	}
	cout<<cnt;
}
 
 
int main(){
	int t=1;
	//cin>>t;
	while(t--)
	solve();
}