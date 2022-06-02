#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    int n,m;
    cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int c1=-1,c2=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]=='R'){
                if(c1!=-1 && j<c1){c1=j;c2=1;break;}
                if(c1==-1) c1=j;
            }
        }
    }
    if(c2==1) cout<<"NO\n";
    else cout<<"YES\n";
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