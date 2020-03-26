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
    
    ll n , k , pos =0;
    cin>>n>>k ;

    ll even , odd ;

    if(n%2==0)
      {
        even=n/2;
        odd=n/2;
      } 
    else 
      {
        even=(n-1)/2;
        odd=even+1;
      }
    if( k>n/2 )
      {
        pos+=odd;
        
        int temp_pos = 1;
        for( ll i=2 ; i<=n ; i=i+2) 
           {
             if(i==k) pos+=temp_pos;

             temp_pos++;  
           }
      } 
    else 
      { 
        pos+=even;
        
        int temp_pos = 1;
        for( ll i=1 ; i<=n ; i=i+2) 
           {
             if(i==k) pos+=temp_pos;

             temp_pos++;  
           }

      }  

  cout<<pos<<"\n";     
    return 0 ;
       
}