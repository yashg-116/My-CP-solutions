#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll mini=1e9,maxi=-1e9,cnt=0;
    for(int i=0;i<n;i++){
        if(i!=0 && a[i]>mini && a[i]<maxi){
            cnt=1;break;
        }
        mini=min(mini,a[i]);
        maxi=max(maxi,a[i]);
    }
    if(cnt==0) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
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