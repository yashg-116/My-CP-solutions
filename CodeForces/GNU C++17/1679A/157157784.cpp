#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin>>n;
    if(n==2) cout<<-1<<'\n';
    else if(n%4==0 || n%6==0 || n%4==2 || n%6==4) {
        ll k=n;
        ll l=n;
        ll minn,maxx;
        k%=6;
        l%=4;
        if(k==2) minn=(n/6)-1+2;
        else if(k==4) minn=(n/6)+1;
        else minn=n/6;
        maxx=(n/4);
        cout<<minn<<" "<<maxx<<'\n';}
    else{
        cout<<-1<<'\n';
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