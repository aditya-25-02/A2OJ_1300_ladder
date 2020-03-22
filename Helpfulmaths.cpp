// Aditya verma 
#include<bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false);std::cin.tie(NULL);std::cout.tie(NULL)
#define rep(i,a,n) for( ll i=a ; i<n ; i++)
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
	
	string s; 

	cin>> s ;

	int len = s.size();

	char num[(len/2)+1] ;

	for ( int i=0 ; i<len ; i=i+2)
	   {
	   	 char a = s.at(i);
         num[i/2]=a;
	   }
    
    sort(num , num+(len/2)+1 ) ;

    rep(i,0,(len/2)+1)
       {
       	cout<<num[i];

       	if(i==(len/2))
       		continue;
       	cout<<"+";
       }

	return 0;
}