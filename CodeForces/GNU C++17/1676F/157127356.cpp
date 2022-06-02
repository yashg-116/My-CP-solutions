#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    int n,k;
    cin>>n>>k;
    int a[n];
    map<int,int>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(m.find(a[i])==m.end()) m[a[i]]=1;
        else m[a[i]]++;
    }
    vector<int> v;
    for(auto it:m){
        if(it.second>=k){
            v.push_back(it.first);
        }
    }
    int len=v.size();
    if(len==0) {cout<<-1<<'\n'; return;}
    else {
        int maxx=0,cnt=v[0],l=v[0],r=v[0];
        if(len==1) {cout<<v[0]<<" "<<v[0]<<'\n'; return;}
        for(int i=1;i<len;i++){
            if(v[i]-v[i-1]==1){
                if(v[i]-cnt>maxx){
                    l=cnt;
                    r=v[i];
                    maxx=v[i]-cnt;
                }
            }
            else cnt=v[i];
        }
        cout<<l<<' '<<r<<'\n';
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