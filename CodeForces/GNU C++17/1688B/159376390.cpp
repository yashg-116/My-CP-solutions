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
    ll a[n],cnt=0,c2=0,c1=0;
    ll ans=INT_MAX;
    set<ll>s;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        if(a[i]%2==0) {s.insert(a[i]);c2++;}
        else {c1++;}
    }
    if(c2==0){cout<<"0"<<endl; return;}
    if(c1>0){
        cout<<c2<<'\n';
    }
    else{
        for(auto x:s){
            cnt=0;
            while(x%2==0){
                x>>=1;
                cnt++;
            }
            ans=min(ans,cnt);
        }
        cout<<ans+c2-1<<'\n';
    }
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