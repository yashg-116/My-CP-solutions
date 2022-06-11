#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t,l,r,a;
    cin>>t;
    while(t--){
        cin>>l>>r>>a;
        ll s=0;
        ll i=(r/a);
        ll j=(l/a);
        if(i==j)
        {
            s=i+r%a;
        }
        else 
        s=max(i+r%a,(i-1)+a-1);
        cout<<s<<"\n";
    }
}