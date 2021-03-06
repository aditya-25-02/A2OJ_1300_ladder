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
#define deb(x) cerr<<#x<<" : "<<x<<"\n";
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

    string s1 , s2 ;
    cin>>s1>>s2 ;
    
    int no = 0 , yes = 0 ;

    rep (i , 0 , s1.size())
        {
        	if(s1.at(i)==s2.at(i) || s1.at(i)==s2.at(i)+32 || s1.at(i)==s2.at(i)-32 )  continue;

        	if(s1.at(i)<s2.at(i))
        	 {
        		no++;
        		break;
        	 }
        	if(s1.at(i)>s2.at(i))
        	 {
        	 	yes++;
        	 	break;
        	 } 
        }
    if(no)
      { 
        cout<<"-1\n";
        return 0 ;
      }  
    if(yes)
      {
        cout<<"1\n";
        return 0 ;
      }  

    cout<<"0\n";

    return 0 ;
}