#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
set<ll>s;
void solve(){
    ll n,k;
    cin>>n>>k;
    ll mini=1e9;
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            if(i<=k){
                mini=min(mini,n/i);
            }
            if(n/i<=k){
                mini=min(mini,i);
            }
        }
    }
    cout<<mini<<"\n";
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