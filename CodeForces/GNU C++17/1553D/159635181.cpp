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
    string s1,s2;
    cin>>s1>>s2;
    int n1=s1.size(),n2=s2.size();
    int l=n1-1,r=n2-1;
    while(l>=0 && r>=0){
        if(s1[l]!=s2[r]){
            l-=2; continue;
        }
        l--;
        r--;
    }
    if(r==-1) cout<<"YES\n";
    else cout<<"NO\n";
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