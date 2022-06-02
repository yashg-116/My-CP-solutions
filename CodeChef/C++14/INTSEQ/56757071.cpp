#include <iostream>
#define ll long long int
using namespace std;

int main() {
    int t,a;
    ll k;
    cin>>t;
    while(t--){
        cin>>k;
        a=0;
        while(!(k%2)){
            k/=2;
            a++;
        }
        cout<<a<<"\n";
    }
	// your code goes here
	return 0;
}
