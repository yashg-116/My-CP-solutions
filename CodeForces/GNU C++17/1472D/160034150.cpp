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
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    ll l=n-1;
    ll a2=0,b=0;
    bool cnt=true;
    while(l>=0){
        if(cnt){
            if(a[l]%2==0)
            a2+=a[l];
        }
        else{
            if(a[l]%2==1)
            b+=a[l];
        }
        l--;
        cnt=!cnt;
    }
    if(a2>b) cout<<"Alice"<<'\n';
    else if(a2<b) cout<<"Bob"<<'\n';
    else cout<<"Tie"<<'\n';
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
    while(t--)
        solve();
    return 0;
}