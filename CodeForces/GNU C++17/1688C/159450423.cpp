#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
ll pow_(ll x, ll y){
	if (y == 0)return 1;
	ll res = 1;
	while(y){if(y & 1){ res=(res*x); }x=(x*x); y=y/2;}
	return res;
}
void solve(){
    ll n,cnt;
    cin>>n;
    string a[(2*n)+1];
    vector<string>s;
    for(int i=0;i<2*n+1;i++) {
        cin>>a[i];
        if(a[i].size()==1)
            s.push_back(a[i]);
    }
    for(auto i:s){
        cnt=0;
        for(auto j:a){
            for(auto k:j){
                if(i[0]==k) cnt++;
            }
        }
        if(cnt&1){
            cout<<i<<'\n';
            break;
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