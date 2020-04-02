// Aditya verma 
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<math.h>
#define rep(i,a,n) for( ll i=a ; i<n ; i++)
#define per(i,a,n) for( ll i=n-1 ; i>=a ;i--)
#define pb push_back
#define TLE cerr<<"Time elapsed : "<<1000*(ld)clock()/(ld)CLOCKS_PER_SEC<<"ms\n"
#define vi vector<int>
#define ll long long int 
#define pii pair <int,int> 
#define db double
#define deb(x) cerr<<#x<<" : "<<x<<"\n";
#define all(x) x.begin(),x.end()
bool compare(ll a,ll b) {return a>b;} //comparator function dec
ll min(ll a,ll b){ return a<b ? a:b;}
ll max(ll a,ll b){ return b>a ? b:a;}
ll gcd(ll a,ll b){ return b?gcd(b,a%b):a;}
const ll mod=1000000007;

using namespace std;

void swap(int *xp, int *yp) {  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  
void Srt(int x[],int y[], int n) {  
    int i, j, min_idx;    
    for (i = 0; i < n-1; i++) {    
        min_idx = i;  
        for (j = i+1; j < n; j++)  
            if (x[j] < x[min_idx])  min_idx = j;  
        swap(&y[min_idx],&y[i]);
        swap(&x[min_idx],&x[i]);  
    }  
}  

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
  	#ifndef ONLINE_JUDGE
  	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
	#endif
    
    int s,n;
    cin>>s>>n;

    int x[n],y[n];

    rep(i,0,n) 
    cin>>x[i]>>y[i];

    Srt(x,y,n);

    int no=0;

    rep(i,0,n) {
        if(s>x[i]) {
           s+=y[i];
           continue;
        }
        no++;
        break;   
    }
    if(no) cout<<"NO\n";
    else   cout<<"YES\n";

    return 0 ;
}