#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    set<pair<int,int>> s;
    ll s2=0;
    ll b[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
        s.insert({a[i],i});
    }
    ll j=0,cnt=-1;
    for(auto i: s){
        s2+=i.first;
        b[j]=s2;
        j++;
    }
    for(int i=n-2;i>=0;i--){
        if(b[i]<(b[i+1]-b[i])){
            cnt=b[i];break;
        }
    }
    vector<ll> v;
    for(auto i:s){
        if(i.first>cnt){
            v.push_back(i.second+1);
        }
    }
    sort(v.begin(),v.end());
    cout<<v.size()<<'\n';
    for(auto i:v) cout<<i<<" ";
    cout<<'\n';
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