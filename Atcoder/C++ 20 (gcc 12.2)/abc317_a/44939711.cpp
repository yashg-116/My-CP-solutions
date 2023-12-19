#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
#define vll vector<ll>

void solve(){
    ll n,h,x;
    cin>>n>>h>>x;
    ll ans=-1;
    for(ll i=0;i<n;i++){
        ll y;
        cin>>y;
        if(h+y>=x && ans==-1)ans=i;
    }   
    cout<<ans+1<<'\n';
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
    // cin>>t;
    t=1;
    while(t--)
        solve();
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
