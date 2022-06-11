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
    ll n,k,k2;
    cin>>n;
    int p=(int)ceil((n+3)/3.0);
    if((n-p)%2){k2=(n-p)/2; k=k2+1;}
    else{ k=(n-p)/2+1; k2=k-2;}
    cout<<k<<" "<<p<<" "<<k2<<endl;
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