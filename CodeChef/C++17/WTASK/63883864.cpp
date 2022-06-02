#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(7,0);
        ll s=0,cnt=-1;
        for(ll i=0;i<7;i++){
            ll m;
            cin>>m;
            s+=m;
            a[i]+=s;
        }
    ll x=n%s;
    if(x==0) x=s;
    for(ll i=0;i<7;i++){
            if(a[i]>=x) {
                cout<<i+1<<'\n';
                break;
            }
        }
    }
}