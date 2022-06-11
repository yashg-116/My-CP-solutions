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
    ll n;
    cin>>n;
    ll a[n];
    ll b[n];
    vector<ll>v(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    v[0]=b[0]-a[0];
    for(int i=1;i<n;i++){
        if(a[i]<b[i-1]){
            v[i]=b[i]-b[i-1];
        }
        else v[i]=b[i]-a[i];
    }
    for(auto i:v) cout<<i<<" ";
    cout<<'\n';
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
    while(t--)
        solve();
    return 0;
}