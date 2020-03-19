// Aditya verma 
#include<iostream>
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
    
    string s ; 
    cin>>s;
    int yes =0 ;

    for( ll i=0 ; i<s.size() ; ++i )
    	{
    		if( s.at(i)== '4' || s.at(i)== '7' )
    		  {	
    		  	if(i==s.size()-1)
    		  	yes++;	

    		  	continue;
              }
            else
              {	
    		    cout<<"NO\n";
    		    break;
    		  }  
    	}

    if(yes)
    cout<<"YES\n";


    //TLE;    
	return 0;
}