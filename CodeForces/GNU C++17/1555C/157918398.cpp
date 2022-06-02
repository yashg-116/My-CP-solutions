#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    int m;
    cin>>m;
    ll a[m],b[m],pre1[m],pre2[m],s=0;
    for(int i=0;i<m;i++) {
        cin>>a[i];
        s+=a[i];
        pre1[i]=s;
    }
    ll s1=0;
    for(int i=0;i<m;i++) {
        cin>>b[i];
        s1+=b[i];
        pre2[i]=s1;
    }
    ll mini=1e18,maxi=0;
    for(int i=0;i<m;i++){
        mini=min((max((pre1[m-1]-pre1[i]),maxi)),mini);
        maxi=pre2[i];
    }
    cout<<mini<<"\n";
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