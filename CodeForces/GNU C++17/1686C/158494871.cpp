#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n&1){
        cout<<"NO\n";
        return;
    }
    sort(a,a+n);
    int t=n/2,prev,cnt=0;
    vector<int> v;
    for(int i=0;i<n/2;i++){
        if(i!=0 && a[i]>=prev) {cnt=1; break;}
        if(a[i]>=a[i+t]) {cnt=1; break;}
        prev=a[i+t];
        v.push_back(a[i]);
        v.push_back(a[i+t]);
    }
    if(cnt==0){
        cout<<"YES\n";
        for(auto i:v) cout<<i<<" ";
        cout<<"\n";
    }
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
    while(t--){
        solve();
    }
    return 0;
}