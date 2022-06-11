#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin>>n;
    ll a[n],mini=1e9+1,sum1=0,sum2=0;
    vector<ll> v1,v2;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i&1){
            v1.push_back(a[i]);
            v2.push_back(1);
            sum1+=a[i];
            sum2+=1;
        }
        else{
            v2.push_back(a[i]);
            v1.push_back(1);
            sum1+=1;
            sum2+=a[i];
        }
    }
    if(sum1>sum2){
        for(auto i:v1) cout<<i<<" ";
    }
    else {
        for(auto i:v2) cout<<i<<" ";
    }
    cout<<'\n';
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