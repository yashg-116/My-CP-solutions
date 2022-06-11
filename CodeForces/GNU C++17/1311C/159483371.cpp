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
    for(int i=0;i<n;i++) a[i]=1;
    string st;
    cin>>st;
    ll b[k],s=0;
    for(int i=0;i<k;i++) cin>>b[i];
    for(auto i:b){
        a[i-1]+=1;
    }
    for(int i=n-2;i>=0;i--){
        s=a[i+1]-1;
        a[i]+=s;
    }
    map<char,int>m;
    for(int i=0;i<26;i++) m['a'+i]=0;
    for(int i=0;i<n;i++){
        m[st[i]]+=a[i];
    }
    for(auto k:m) cout<<k.second<<' ';
    cout<<'\n';
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