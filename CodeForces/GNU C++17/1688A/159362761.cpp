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
    ll u;
    int k=n;
    int j=0;
    if(n==1) {cout<<3<<'\n';return;}
    if(n&1) {cout<<1<<'\n';return;}
    if(!(n&(n-1))) {cout<<n+1<<'\n';return;}
    while(k){
        if(k%2==1){
            u=1<<j;
            break;
        }
        j++;
        k>>=1;
    }
    cout<<u<<endl;
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