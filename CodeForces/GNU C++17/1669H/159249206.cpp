#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    ll n,k,ans=0;
    cin>>n>>k;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll b[31];
    for(int i=0;i<31;i++){
        b[i]=n;
    }
    for(ll i=0;i<n;i++){
       ll k=a[i];
       ll j=0;
       while(k){
           if(k%2) b[30-j]--;
            k>>=1;
            j++;
       } 
    }
    for(ll i=0;i<31;i++){
        if(b[i]<=k){
            ans+=(1<<(30-i));
            k-=b[i];
        }
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