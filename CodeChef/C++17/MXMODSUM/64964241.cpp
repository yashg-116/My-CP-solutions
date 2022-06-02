#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
ll n, m, maxi, maxx;
void solve(){
    cin>>n>>m; 
    maxi=-1e18, maxx=-1;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        maxx=max(maxx,a[i]);
    }
    for(int i=0;i<n;i++){
        maxi=max(maxi,maxx+a[i]+((a[i]-maxx)%m+m)%m);
    }
    cout<<maxi<<'\n';
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