#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    int n,q;
    cin>>n>>q;
    ll a[n];
    ll s=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
    }
    map<ll,ll>m;
    ll cnt=-1,c2=0;
    while(q--){
        ll t,i,x;;
        cin>>t;
        if(t==1){
            cin>>i>>x;
            if(cnt==-1){
            s+=x-a[i-1];
            a[i-1]=x;
            }
            else {
                if(m.find(i-1)==m.end()) {
                    s+=x-cnt;
                    m[i-1]=x;
                    
                }
                else {s+=x-m[i-1];}
            }
            cout<<s<<'\n';
        }
        else{
            cin>>x;
            cnt=x;
            s=x*n;
            cout<<s<<'\n';
            m.clear();
        }
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
        solve();
    return 0;
}