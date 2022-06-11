#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    ll n,cnt=0;
    cin>>n;
    string s;
    cin>>s;
    vector<ll>v1,v2;
    ll l,r;
    for(int i=0;i<n;i++){
        if(s[i]=='*'){
            v1.push_back(i);
            cnt++;
        }
    }
    if(cnt==0 || cnt==1){cout<<"0\n"; return;}
    l=cnt/2;
    r=v1[l];
    cnt=0;
    ll l2=1,r2=1;
    for(ll i=0;i<n;i++){
        if(s[i]=='*'){
            if(i<r){
                cnt+=(r-i-l2);
                l2++;
            }
            else if(i>r){
                cnt+=(i-r-r2);
                r2++;
            }
        }
    }
    cout<<cnt<<'\n';
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