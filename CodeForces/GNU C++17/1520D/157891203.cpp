#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
        a[i]-=i;
    }
    sort(a,a+n);
    map<ll,ll>m;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            m[a[i]]++;
        }
    }
    ll s=0;
    for(auto i:m){
        s+=(i.second*(i.second+1))/2;
    }
    cout<<s<<'\n';
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