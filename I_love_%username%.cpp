// Aditya verma 
#include<iostream>
#define FASTIO ios_base::sync_with_stdio(false);std::cin.tie(NULL);std::cout.tie(NULL)
#define rep(i,a,n) for( ll i=0 ; i<n ; i++)
#define per(i,a,n) for( ll i=n-1 ; i>=a ;i--)
#define pb push_back
#define TLE cerr<<"Time elapsed : "<<1000*(ld)clock()/(ld)CLOCKS_PER_SEC<<"ms\n"
#define vi vector<int> 
#define ll long long int 
#define pii pair<int,int> 
#define db typedef double
ll min(ll a, ll b ){ return a<b ? a:b ;}
ll max(ll a, ll b ){ return a<b ? b:a ;}
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
const ll mod=1000000007;

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

	int max_cap =0  , diff ;

	rep(i,0,n)
	   { 
	   	 int t1 , t2 ; 
	   	 cin>>t1>>t2;

	   	 if(i==0)
	   	 	{
	   	 		diff=t2;
	   	 		continue;
	   	 	}
	   	 	
         if(t2+(diff-t1) > max_cap )
         	max_cap=t2+(diff-t1);

         diff=max_cap;
	    }  

    cout<<max_cap<<"\n";
	return 0;
}