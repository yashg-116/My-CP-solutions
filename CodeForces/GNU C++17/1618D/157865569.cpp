#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    int n,k;
    cin>>n>>k;
    ll a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int s=0,i;
    for(i=0;i<n-2*k;i++){
        s+=a[i]; 
    }
    for(int j=i;j<n-k;j++){
        s+=a[j]/a[j+k];
    }
    cout<<s<<"\n";
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