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
    
    int n ; 
    cin>>n; 

    int x[n] , y[n] , z[n] ;

    int x_sum=0 , y_sum=0 , z_sum=0 ;

    rep(i,n)
       {
        	cin>>x[i];
        	x_sum+=x[i];
       	    cin>>y[i];
       	    y_sum+=y[i];
         	cin>>z[i];
         	z_sum+=z[i];
       }

    if(x_sum==0 && y_sum==0 && z_sum==0)
    cout<<"YES\n";
    else
    cout<<"NO\n";   

	//TLE;    
	return 0;
}