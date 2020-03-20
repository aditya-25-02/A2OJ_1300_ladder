// Aditya verma 
#include<iostream>
#include<math.h>
#include<vector>
#define ll long long int 
#define ld long double 
#define FASTIO ios_base::sync_with_stdio(false);std::cin.tie(NULL);std::cout.tie(NULL)
#define rep(i,n) for( ll i=0 ; i<n ; ++i)
#define reps(i,a,n) for( ll i=a ; i<n ; ++i)
#define vi vector < int >
#define pb push_back
#define TLE cerr<<"Time elapsed : "<<1000*(ld)clock()/(ld)CLOCKS_PER_SEC<<"ms\n"

using namespace std;

int main()
{
    FASTIO;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    
    int n ; 
    cin>>n;
    
    if(n%2==0)
      {
      	for ( int i=1 ; i<=n/2 ; ++i)
      		 {
      		 	cout<<(2*i);
      		 	cout<<(2*i-1);
      		 }
      }
    else 
        cout<<"-1\n";  
    
	return 0;
}