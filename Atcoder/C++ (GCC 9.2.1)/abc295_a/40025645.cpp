#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll int
ll pow_(ll x, ll y){
	if (y == 0)return 1;
	ll res = 1;
	while(y){if(y & 1){ res=(res*x); }x=(x*x); y=y/2;}
	return res;
}
unordered_map<int,int>m;
vector<ll>prime(2e5+1);
void solve(){
    ll n;
    cin>>n;
    int f=0;
    for(ll i=0;i<n;i++){
        string s;
        cin>>s;
        if(s=="and"||s=="not"||s=="the"||s=="that"||s=="you"){
            f=1;
        }
    }
    if(f)
    cout<<"Yes\n";
else cout<<"No\n";
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
    t=1;
    // cin>>t;
    while(t--)
        solve();
    return 0;
}