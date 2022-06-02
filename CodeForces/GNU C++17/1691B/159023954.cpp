#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    ll cnt=0,c1;
    if(n==1){cout<<-1<<'\n'; return;}
    for(ll i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            if(cnt==0) c1=i;
            cnt++;
            a[i]=i+2;
            if(i==(n-2)) a[i+1]=c1+1;
        }
        else{
            if(cnt==0 || i==(n-2)){cnt=-1;break;}
            else{
                a[i]=c1+1;
            }
            cnt=0;
        }
    }
    if(cnt==-1) cout<<"-1\n";
    else{
        for(ll i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<'\n';
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