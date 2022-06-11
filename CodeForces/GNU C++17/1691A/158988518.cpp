#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    ll x=0,y=0;
    for(auto i: a){
        if(i&1) x++;
        else y++;
    }
    cout<<(min(x,y))<<'\n';
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