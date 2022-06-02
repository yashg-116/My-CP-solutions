#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    int l1,l2,r1,r2;
    cin>>l1>>r1>>l2>>r2;
    int s=0;
    if(r1<l2 || r2<l1) cout<<l1+l2<<'\n';
    else cout<<max(l1,l2)<<'\n';
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