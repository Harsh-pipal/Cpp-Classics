//Author @Harsh_xerus

#include<bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define rep(i,n) for (int i = 0; i < n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define ll long long 
#define INF 1e18
#define nl '\n'
const ll maxn = 2e5 + 100;
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
using namespace std;

//--------------------------Helper_functions-------------------------------//

//-------------------------------GCD---------------------------------------//

ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}

//-------------------------------LCM---------------------------------------//

ll lcm(ll a, ll b){return (a * b) / gcd(a, b);}

//----------------------------Factorial------------------------------------//

ll fact(ll x){if(x==0)return 1;return (x*fact(x-1))%mod;}

//-----------------------------Bin_Expo------------------------------------//

ll binpow(ll a,ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a)%mod;
        a = (a * a)%mod;
        b >>= 1;
    }
    return res%mod;
}

ll n,m;

bool safe(ll row, ll col ,vector<vector<ll>>&mat,vector<ll>rowv,vector<ll>lowd,vector<ll>upd){   
    if(upd[row-col+n]==1)
        return false;
    
    if(rowv[row]==1)
        return false;
    
    if(lowd[row+col]==1)
        return false;
    
    return true;
}
int nqueens(ll col, vector<vector<ll>>&mat,vector<ll>&rowv,vector<ll>&lowd,vector<ll>&upd){
    if(col==n){
        //for(int i=0;i<n;i++){
        //    for(int j=0;j<n;j++){
        //        cout<<mat[i][j]<<" ";
        //    }
        //    cout<<nl;
        //}
        //cout<<nl;
        return 1;
    }
    ll cnt=0;
    for(int row=0;row<n;row++){
        if(safe(row,col,mat,rowv,lowd,upd)){
            mat[row][col]=1;
            rowv[row]=1;
            lowd[row+col]=1;
            upd[row-col+n]=1;
            cnt+=nqueens(col+1,mat,rowv,lowd,upd);
            mat[row][col]=0;
            rowv[row]=0;
            lowd[row+col]=0;
            upd[row-col+n]=0;
        }
    }
    return cnt;
}

//-------------------------------START------------------------------------//

void solve(){ 
    
    cin>>n;
    vector<vector<ll>>mat(n,vector<ll>(n,0));
    vector<ll>rowv(n,0);
    vector<ll>lowd(2*n-2,0);
    vector<ll>upd(2*n-2,0);
    cout<<nqueens(0,mat,rowv,lowd,upd);
    
}

int main(){
    ll t = 1, i = 1;
    //cin >> t;
    while (t--)
    {
        //cout << "Case #" << i << ": ";   //only during google contest
        //i++;                             //only during google contest

        solve();
    }
}
