#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    ll n,k;
    cin>>n>>k;
    if(n==4 && k==3){cout<<-1<<'\n';return;}
    if(k==0){
        for(int i=0;i<n/2;i++){
            cout<<i<<" "<<(i^(n-1))<<'\n';
        }
    }
    else if(k<n-1){
        cout<<0<<" "<<((n-1)^k)<<'\n';
        cout<<k<<" "<<n-1<<'\n';
        for(int i=1;i<n/2;i++){
            if(i==k|| i==((n-1)^k)) continue;
            cout<<i<<" "<<(i^(n-1))<<'\n';
        }
    }
    else{
        cout<<n-1<<" "<<n-2<<'\n';
        cout<<(n-3)<<" "<<1<<'\n';
        cout<<0<<" "<<2<<'\n';
        for(int i=1;i<n/2;i++){
            if(i==n-2|| i==n-3 || i==1|| i==2) continue;
            cout<<i<<" "<<(i^(n-1))<<'\n';
        }
    }
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