#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin>>n;
    ll a[n],s=0;
    multiset<ll>st1,st2;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        st1.insert(a[i]);
        s+=a[i];
    }
    st2.insert(s);
    ll flag=1;
    while(st2.size()>0){
        ll i=*--st1.end();
        ll i2=*--st2.end();
        if(i>i2){
            break;
        }
        st2.erase(--st2.end());
        if(st1.find(i2)!=st1.end()){
            st1.erase(st1.find(i2));
        }
        else{
            st2.insert(i2/2);
            st2.insert((i2+1)/2);
        }
    }
    if(st1.empty()) cout<<"YES"<<endl;
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
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}