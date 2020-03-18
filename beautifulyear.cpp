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
    
    string s;
    cin>>s;

    int up = 0, low =0 ;
    for( int i=0 ; i< s.size() ; i++)
       {
       	  if(s.at(i)>='A'  && s.at(i)<='Z')
       	  	up++;
       	  else
       	  	low++;
       }	 

       if(up>low)
       {
       	 for(int i=0; i <s.size() ; i++)
       	   {
       	   	  if(s.at(i)>='a' && s.at(i)<='z')
       	   	  	s.at(i)-=32;
       	   } 
       }
       else
       {
       	  for(int i=0; i <s.size() ; i++)
       	   {
       	   	  if(s.at(i)>='A' && s.at(i)<='Z')
       	   	  	s.at(i)+=32;
       	   } 
       }

       cout<<s<<"\n";

    //TLE;    
	return 0;
}