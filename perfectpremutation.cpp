// Aditya verma 
#include<iostream>
#define ll long long int 
#define ld long double 
#define FASTIO ios_base::sync_with_stdio(false);std::cin.tie(NULL);std::cout.tie(NULL)
#define rep(i,n) for( ll i=0 ; i<n ; i++)
#define reps(i,a,n) for( ll i=a ; i<n ;i++)
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
    cin>>n ;

    int a[n] ,  min =100  , max = 0 , time = 0 , max_index , min_index ;

    rep(i,n)
        {
        	cin>>a[i];
        	if(a[i]>max)
        		max=a[i];
        	if(a[i]<min)
        		min=a[i];
        }

    rep(i,n)
        {
        	if(a[i]==max)
        	{
        		max_index=i;
        		break;
        	}
        }	
    for (int i= n-1 ; i>=0 ; i--)
    	 {
    	 	if(a[i]==min)
    	 	{
    	 		min_index=i;
    	 		break;
    	 	}
    	 }
    
    if(max_index!=0 && min_index != n-1)
      {
      	time = time + (n-1) - min_index;
      	time = time + abs(0-max_index);
      	
      	if(min_index<max_index)
      		time--;
      }
    else 
      {
      	if(max_index==0)	
      	time = time +(n-1)-min_index;
      	   
      	else    	   
     	time = time+abs(0-max_index);
      }  

    cout<<time<<"\n";   


	return 0;
}