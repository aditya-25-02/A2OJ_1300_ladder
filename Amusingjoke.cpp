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
    
    int  n , k , l , c , d , p , nl , np ;

    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int drink_toast = k*l/nl ;
    //deb(drink_toast)
    int lime_toast  = c*d ;
    //deb(lime_toast)
    int salt_toast  = p/np;
    //deb(salt_toast)    
    int result1 , result2 ;

    lime_toast < drink_toast ? result1 = lime_toast :
                               result1 = drink_toast ;
    
    result1 < salt_toast ? result2 = result1 :
                           result2 = salt_toast ;

    cout<<result2/n<<"\n";

    return 0 ;
}