#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    ll n,m;
    cin>>n>>m;
    if(n%3==0 || m%3==0){
        cout<<0<<'\n';
        return;
    }
    else if(n%3==1 && m%3==1){
        cout<<1<<'\n';
        return;
    }
    else if(n%3==2 && m%3==2){
        cout<<1<<'\n';
        return;
    }
    else {
        cout<<2<<'\n';
        return;
    }
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
    while(t--){
        solve();
    }
    return 0;
}