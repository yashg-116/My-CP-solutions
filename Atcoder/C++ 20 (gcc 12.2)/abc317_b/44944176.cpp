#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
#define vll vector<ll>

void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    ll ans=a[0];
    for(ll i=1;i<n;i++) {
        if(a[i]!=ans+1){
            cout<<ans+1<<'\n';
            return;
        }
        ans=a[i];
    }  
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
