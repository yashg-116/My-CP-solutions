#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    string s;
    cin>>s;
    if(s[0]+s[1]+s[2]==s[3]+s[4]+s[5]){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
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