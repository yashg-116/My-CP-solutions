#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    ll r=c;
    ll q=r+b;
    ll c2=1;
    ll p;
    while(true){
        p=q*c2+a;
        if(r%p==c) break;
        c2++;
    }
    cout<<p<<" "<<q<<" "<<r<<'\n';
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