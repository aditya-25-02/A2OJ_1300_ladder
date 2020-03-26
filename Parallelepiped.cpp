// Aditya verma 
#include <iostream>
#include<math.h>
#define FASTIO ios_base::sync_with_stdio(false);std::cin.tie(NULL);std::cout.tie(NULL)
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
ll min(ll a,ll b){ return a<b ? a:b;}
ll max(ll a,ll b){ return b>a ? b:a;}
ll gcd(ll a,ll b){ return b?gcd(b,a%b):a;}
const ll mod=1000000007;

using namespace std;

int main()
{
    FASTIO;
  	#ifndef ONLINE_JUDGE
  	freopen("input.txt","r",stdin);
	  freopen("output.txt","w",stdout);
	  freopen("error.txt","w",stderr);
	  #endif
    
    int n ,pos1 , pos2 ; 
    cin>>n ;

    int a[n];

    rep(i,0,n)
    cin>>a[i];

    int diff = INT_MAX ;

    rep(i,0,n)
       {
          rep(j,0,n)
             {
                if(i==j)                continue ;
                if(abs(a[i]-a[j])<diff) 
                  {
                    diff=abs(a[i]-a[j]);
                    pos1=i , pos2=j ;
                  }   
             }
       }
    pos1++;
    pos2++;   

    cout<<pos1<<" "<<pos2<<"\n";
    return 0 ;
       
}