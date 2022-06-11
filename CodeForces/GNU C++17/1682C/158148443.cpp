#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    map<ll,ll> m;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
    }
    ll k1=0,k2=0;
    for(auto it:m){
        if(it.second>1) k2++;
        else k1++;
    }
    cout<<k2+(k1+1)/2<<"\n";
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}