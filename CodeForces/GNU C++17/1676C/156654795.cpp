#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    int n,m;
    cin>>n>>m;
    string a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int mi=10000001,s=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=0;k<m;k++){
                s+=abs(a[i][k]-a[j][k]);
            }
        mi=min(mi,s);
        s=0;   
        }
    }
    cout<<mi<<'\n';
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