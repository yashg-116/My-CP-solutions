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
    ll n,k,s=0;
    cin>>n>>k;
    vector<ll>a;
    vector<ll>b,c;
    for(int i=0;i<n;i++) {
        int p;
        cin>>p;
        s+=p/k;
        if(p%k==0) continue;
        if(float(p%k)<(k/2.0)) b.push_back(p%k);
        else c.push_back(p%k);
    }
    sort(b.begin(),b.end());
    sort(c.begin(),c.end(),greater<ll>());
    ll i=0,j=0;
    while(i<b.size() && j<c.size()){
        if(b[i]+c[j]>=k){
            s+=1;
            i++;
            j++;
        }
        else{
            i++;
        }
    }
    if(j!=c.size()) s+=(c.size()-j)/2;
    cout<<s<<'\n';
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
    while(t--)
        solve();
    return 0;
}