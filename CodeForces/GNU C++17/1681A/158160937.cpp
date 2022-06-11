#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    ll n,m;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    ll b[m];
    for(ll i=0;i<m;i++){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    int t2=2;
    while(t2--){
    if(a[n-1]<b[m-1]) cout<<"Bob\n";
    else if(a[n-1]==b[m-1]){
        if(t2==1) cout<<"Alice\n";
        else cout<<"Bob\n";
    }
    else cout<<"Alice\n";
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
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}