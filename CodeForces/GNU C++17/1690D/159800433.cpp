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
    string s;
    cin>>s;
    ll a[n+1];
    ll cnt=0;
    a[0]=0;
    for(int i=1;i<=n;i++) {
        if(s[i-1]=='B') cnt++;
        a[i]=cnt;
    }
    // for(auto i:a) cout<<i<<" ";
    ll mini=0;
    for(int i=0;i<n-k+1;i++){
        mini=max((a[i+k]-a[i]),mini);
    }
    cout<<k-mini<<endl;
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
    while(t--)
        solve();
    return 0;
}