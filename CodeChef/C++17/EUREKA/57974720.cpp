#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while (t--){
	    cin>>n;
	    cout<<round(pow((0.143*n),n))<<"\n";
	}
	return 0;
}
