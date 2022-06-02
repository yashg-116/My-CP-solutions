#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin>>n;
    int a[n];
    int mi=10000001;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        mi=min(mi,a[i]);
    }
    ll sum=0;
    for(int i=0;i<n;i++){
        sum+=abs(mi-a[i]);
    }
    cout<<sum<<endl;
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