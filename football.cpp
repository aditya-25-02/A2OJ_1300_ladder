// Aditya verma 
#include <iostream>
#include<vector>
#include<string>
#include<math.h>
#define FASTIO ios_base::sync_with_stdio(false);std::cin.tie(NULL);std::cout.tie(NULL)
#define rep(i,a,n) for( ll i=a ; i<n ; i++)
#define per(i,a,n) for( ll i=n-1 ; i>=a ;i--)
#define pb push_back
#define TLE cerr<<"Time elapsed : "<<1000*(ld)clock()/(ld)CLOCKS_PER_SEC<<"ms\n"
#define vi std::vector <int>
#define ll long long int 
#define pii pair <int,int> 
#define db double
#define deb(x) cerr<<#x<<" : "<<x<<"\n";
#define all(x) x.begin(),x.end()
ll min(ll a,ll b){ return a<b ? a:b;}
ll max(ll a,ll b){ return b>a ? b:a;}
ll gcd(ll a,ll b){ return b?gcd(b,a%b):a;}
const ll mod=1000000007;

using namespace std;

int main() {
    FASTIO;
  	#ifndef ONLINE_JUDGE
  	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
	#endif
    
    int n , m ;
    cin>>n; 
    int a[n];
    rep(i,0,n)
    cin>>a[i];
    cin>>m;
    int b[m];
    rep(j,0,m)
    cin>>b[j];

    vi ratio ;

    rep(i,0,n) {

        int   numa = a[i];
        float temp = a[i];

        rep(j,0,m) {
            int numb = b[j];
            if(ceil(numb/temp)==numb/numa) ratio.pb(numb/numa);        
        }

    }
    int max_ratio = 0 , freq = 0 ;

    rep(i,0,ratio.size()) {
        if(ratio.at(i) > max_ratio) 
           max_ratio = ratio.at(i);
    }   

    rep(i,0,ratio.size())
    if(ratio.at(i)==max_ratio) freq++;
    
    cout<<freq<<"\n";
    return 0 ;
}