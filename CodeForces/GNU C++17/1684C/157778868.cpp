#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    ll n,m;
    cin>>n>>m;
    ll x;
    vector<vector<int>> a(n,vector<int>(m));
    ll t1=-1,t2=-1,prev,cnt=0,flag=0,t3=-1,t4=-1;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++) cin>>a[i][j];
    }
    vector<int>k;
    for(int i=0;i<n && k.empty();i++){
        vector<int> v=a[i];
        sort(v.begin(),v.end());
        for(int j=0;j<m;j++){
            if(v[j]!=a[i][j]){
                k.push_back(j);
            }
        }
    }
    if(k.size()==0) {cout<<"1 1\n"; return;}
    if(k.size()>2) {cout<<"-1\n"; return;}
    for(int i=0;i<n;i++){
        swap(a[i][k[0]],a[i][k[1]]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m-1;j++){
            if(a[i][j]>a[i][j+1]){
                flag=1;break;
            }
        }
    }
    if(flag==0) cout<<k[0]+1<<" "<<k[1]+1<<'\n';
    else cout<<"-1\n";
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