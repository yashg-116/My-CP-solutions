#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
ll pow_(ll x, ll y){
	if (y == 0)return 1;
	ll res = 1;
	while(y){if(y & 1){ res=(res*x); }x=(x*x); y=y/2;}
	return res;
}
void solve(){
    ll n,k;
    cin>>n>>k;
    ll b[n];
    cin>>b[0];
    for(int i=1;i<n;i++) {
        cin>>b[i];
        b[i]+=b[i-1];
    }
    
    if(k<n){
        ll mx=b[k-1];
        for(int i=1;i<=n-k;i++){
            mx=max(mx,b[i+k-1]-b[i-1]);
        }  
        cout<<mx+(k*(k-1))/2<<'\n'; 
    }
    else{
        ll ans=b[n-1]+(n*(n-1))/2;
        ans+=((k/n)-1)*n*n;
        k%=n;
        ans+=k*n;
        cout<<ans<<'\n';
    }
}

int main() {

    // ios_base::sync_with_stdio(false);
    // cin.tie(0);
    // cout.tie(0);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}