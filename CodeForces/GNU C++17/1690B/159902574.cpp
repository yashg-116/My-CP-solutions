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
    ll b[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    ll mini=-1,cnt=1,mini2=-1;
    for(int i=0;i<n;i++){
        if(a[i]-b[i]>=0){
            mini=max(a[i]-b[i],mini);
        }
        else{cnt=0;break;}
    }
    ll k=0,flag=0;;
    if(cnt!=0){
            for(int i=0;i<n;i++){
                ll p=a[i]-b[i];
                if(b[i]!=0){
                    if(p!=mini){
                        cnt=0;break;
                        k++;
                    }
                    
                }
                if(b[i]==0 && p==mini){
                    flag=1;
                    }
                }
    }
    if(k>0 && flag==1) cnt=0;
    if(cnt==0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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