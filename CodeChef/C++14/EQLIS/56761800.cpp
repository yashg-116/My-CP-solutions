#include <iostream>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
	int t;
	ll n;
	cin>>t;
	while(t--){
	    cin>>n;
	    if(n==2)
	    cout<<"NO"<<"\n";
	    else{
	    cout<<"YES"<<"\n";
	    if(n&1){
	    for(ll i=1;i<=n/2;i++)
	    cout<<i<<" ";
	    for(ll i=n;i>n/2;i--)
	    cout<<i<<" ";}
	    else{
	        for(ll i=2;i<=n/2;i++)
	        cout<<i<<" ";
	        cout<<1<<" ";
	        for(ll i=n;i>n/2;i--)
	        cout<<i<<" ";
	    }
	    cout<<"\n";
	    }
	}
	return 0;
}
