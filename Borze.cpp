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
    
    string s;
    cin>>s;
    int n=s.size();

    rep(i,n)
       {
        int temp =0 ;
        
       	if(i==n-1)
       	  {
             cout<<"0";
             break;
          }  
        if(s.at(i)=='.')
       		 cout<<"0";  
       	if(s.at(i)=='-' && s.at(i+1)=='.')
       	   {
       	   	 cout<<"1";
       	   	 temp++;
       	   } 
       	if(s.at(i)=='-' && s.at(i+1)=='-')
       	   {
             cout<<"2";
           	 temp++;
           }

           i+=temp;	
       }

	//TLE;    
	return 0;
}