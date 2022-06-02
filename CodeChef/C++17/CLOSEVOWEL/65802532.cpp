#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    ll n,cnt=1,m=1e9+7;
    cin>>n;
    string s;
    cin>>s;
    for(auto i:s){
        if(i=='c'||i=='g'||i=='l'||i=='r')
            cnt*=2;
            cnt%=m;
    }
    cout<<cnt<<'\n';
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
