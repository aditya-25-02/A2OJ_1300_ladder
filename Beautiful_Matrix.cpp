// Aditya verma 
#include<iostream>
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

	int a[5][5] , j , r , c ;

	rep(i,5)
	  {
	  	 for( int j=0 ; j<5 ; ++j)
	  	    {
	  	    	cin>>a[i][j];
	  	       
	  	        if(a[i][j]==1)  
	  	 	      {
	  	    	   r=i; r++;
	  	           c=j; c++;
	  	          }    
	        }
	  }     

    cout<<abs(r-3)+abs(c-3)<<"\n";      

	//TLE;    
	return 0;
}