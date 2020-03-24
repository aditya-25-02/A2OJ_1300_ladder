// Aditya verma 
#include <iostream>
#define FASTIO ios_base::sync_with_stdio(false);std::cin.tie(NULL);std::cout.tie(NULL)
#define rep(i,a,n) for( ll i=a ; i<n ; i++)
#define per(i,a,n) for( ll i=n-1 ; i>=a ;i--)
#define pb push_back
#define TLE cerr<<"Time elapsed : "<<1000*(ld)clock()/(ld)CLOCKS_PER_SEC<<"ms\n"
#define vi vector<int>
#define ll long long int 
#define pii pair<int,int> 
#define db double
#define min(lla,llb){ return a<b ? a:b ;}
#define max(lla,llb){ return a<b ? b:a ;}
#define gcd(lla,llb) { return b?gcd(b,a%b):a;}
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
    
    string s ; 
    cin>>s;

    int count = 0 ;

    for(char a = 'a' ; a<= 'z' ; a++)
       {
       	   rep( i , 0 , s.size() )
       	      {
       	      	if(s.at(i)==a)
       	      	{
       	      		count++;
       	      		break;
       	      	}
       	      }
       }	
    
    if(count%2==0)  cout<<"CHAT WITH HER!\n";
    else            cout<<"IGNORE HIM!\n";
	return 0;
}