#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll unsigned long long
ll pow_(ll x, ll y){
	if (y == 0)return 1;
	ll res = 1;
	while(y){if(y & 1){ res=(res*x); }x=(x*x); y=y/2;}
	return res;
}
void solve(){
    ll n,j=1;
    cin>>n;
     for(int i = 3,cnt = 0;(cnt++) < n;i+=2){
          cout<<i<<' ';
        }
        cout<<endl;
        for(int i =2,cnt = 0;(cnt++) < n;i+=2){
          cout<<i<<' ';
        }
        cout<<endl;
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