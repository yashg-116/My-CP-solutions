#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    ll n,m;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>m;
    vector<ll> b(m);
    for(int i=0;i<m;i++) cin>>b[i];
    ll s=0;
    for(int i=0;i<m;i++){
        s+=b[i];
    }
    s%=n;
    rotate(a.begin(), a.begin()+s, a.end());
    cout<<a[0]<<"\n";
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