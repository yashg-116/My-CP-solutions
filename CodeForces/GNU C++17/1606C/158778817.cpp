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
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll j=0,s=0;
    k++;
    for(ll j=0;j<n;j++){
        if(j<(n-1)){
                ll y=(pow_(10,a[j]));
                ll z=min(k,(pow_(10,(a[j+1]-a[j]))-1));
                s+=y*z;
                k-=z;
        }
        else{
            s+=(pow_(10,a[j]))*(k);
            k=0;
        }
    }
    cout<<s<<'\n';
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