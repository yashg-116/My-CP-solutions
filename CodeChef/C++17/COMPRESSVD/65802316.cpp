#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    vector<ll> v;
    v.push_back(a[0]);
    ll k=0;
    for(int i=1;i<n;i++){
        if(a[i]!=v[k]){
            v.push_back(a[i]);
            k++;
        }
    }
    cout<<v.size()<<'\n';
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