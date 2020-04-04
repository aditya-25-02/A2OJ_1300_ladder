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

    int n ;
    cin>>n;
    int a[n];
    rep(i,0,n)
    a[i]=i+1;

    rep(i,0,n-1) {
        int temp = a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }

    rep(i,0,n) cout<<a[i]<<" ";

    

    return 0 ;
}