#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t,n,k,cnt;
	string s;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    cin>>s;
	    cnt=0;
	    for(int j=0;j<n/2;j++){
	        if(s[j]!=s[n-j-1])
	            cnt++;
	    }
	    int r=k-cnt;
	   // cout<<cnt<<k<<endl;
	   if((r>=0)&&(r%2==0)){
            cout<<"YES\n";
        }
        else if((r>=0) && (n%2==1)){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
	}
	return 0;
}
