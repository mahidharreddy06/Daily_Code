#include <iostream>
#include<algorithm>
#define ll long int
using namespace std;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    ll a[n];
	    ll sum=0;
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	        sum+=a[i];
	    }
	    sort(a,a+n);
	    
	   // ll b[n];
	    for(ll i=0;i<n;i++){
	   cout<<sum<<" ";
	   sum=sum-a[i];
	      
	  } 
	   
	  
	      
	    cout<<endl;
	}
	return 0;
}