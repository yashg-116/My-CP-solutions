#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
#define vll vector<ll>
bool check(ll mid,vector<ll>&a,ll x, ll n){
    ll cnt=1;
    ll s=0;
    for(ll i=0;i<n;i++){
        if(a[i]>mid)return 0;
        if((s+a[i])>mid){
            cnt++;
            s=a[i]+1;
        }
        else s+=a[i]+1;
    }
    return cnt<=x;
}
void solve(){
    ll n,x;
    cin>>n>>x;
    vector<ll>a(n);
    ll s=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
    }
    ll l=0,r=1e18,ans=s;
    while(l<r){
        ll mid=(l+r)/2;
        if(check(mid,a,x,n)){
            r=mid;
            ans=mid;
        }
        else l=mid+1;
    }
    cout<<ans<<'\n';
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
    // while(t--)
        solve();
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
