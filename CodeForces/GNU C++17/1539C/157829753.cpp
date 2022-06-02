#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    ll n,k,x;
    cin>>n>>k>>x;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    ll ans=0,g=0;
    vector<ll>v;
    for(int i=0;i<n-1;i++){
        if(a[i+1]-a[i]>x){
            ll h=a[i+1]-a[i];
            v.push_back((h-1)/x);
            g++;
        }
    }
    sort(v.begin(),v.end());
    g++;
    for(auto i:v){
        k-=i;
        if(k<0) break;
        g--;
    }
    
    cout<<g<<"\n";
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
        solve();
    
    return 0;
}