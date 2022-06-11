#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    string s;
    cin>>s;
    int tz=0,tn=0,pn=0,pz=0,ans;
    for(auto i:s){
        if(i=='0') tz++;
        else tn++;
    }
    ans=min(tz,tn);
    for(auto i:s){
        if(i=='0'){
            pz++;
            tz--;
        }
        else{
            pn++;
            tn--;
        }
    ans=min(min(ans,(pn+tz)),(pz+tn));
    }
    cout<<ans<<'\n';
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