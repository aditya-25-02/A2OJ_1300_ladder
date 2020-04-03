// Aditya verma 
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<math.h>
#define rep(i,a,n) for( ll i=a ; i<n ; i++)
#define per(i,a,n) for( ll i=n-1 ; i>=a ;i--)
#define pb push_back
#define TLE cerr<<"Time elapsed : "<<1000*(ld)clock()/(ld)CLOCKS_PER_SEC<<"ms\n"
#define vi vector<int>
#define ll long long int 
#define pii pair <int,int> 
#define db double
#define deb(x) cerr<<#x<<" : "<<x<<"\n";
#define all(x) x.begin(),x.end()
bool compare(ll a,ll b) {return a>b;} //comparator function dec
ll min(ll a,ll b){ return a<b ? a:b;}
ll max(ll a,ll b){ return b>a ? b:a;}
ll gcd(ll a,ll b){ return b?gcd(b,a%b):a;}
const ll mod=1000000007;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
  	#ifndef ONLINE_JUDGE
  	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
	#endif
    
    int n , m ;
    cin>>n>>m;
    int f[m];
    rep(i,0,m)
    cin>>f[i];
    sort(f,f+m);
    
    if(m==n) cout<<f[m-1]-f[0]<<"\n";
    else {
        int res = INT_MAX ;
        rep(i,0,m-n+1) {
            if(f[n-1+i]-f[i]<res) res = f[n-1+i]-f[i];
        } 
    cout<<res<<"\n";
    }
    return 0 ;
}