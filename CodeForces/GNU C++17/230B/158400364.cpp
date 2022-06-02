#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
vector<ll> v(1e6+1,1);
set<ll> s;
void solve(){
    ll n;
    cin>>n;
    if(s.find(n)!=s.end()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    for(ll i=2;i<=1e6;i++){
        if(v[i]==1)
        for(ll j=i*i;j<=1e6;j+=i){
            v[j]=0;
        }
    }
    for(ll i=2;i<=1e6;i++){
        if(v[i]==1) 
        s.insert(i*i);
    }
    
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}