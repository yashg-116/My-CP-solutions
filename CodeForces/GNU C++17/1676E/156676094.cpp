#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    int n,q;
    cin>>n>>q;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    int s=0;
    for(int i=0;i<n;i++){
        s+=a[i];
        a[i]=s;
    }
    while(q--){
        int p;
        cin>>p;
        if(lower_bound(a.begin(),a.end(),p)==a.end()){
            cout<<"-1\n";
        }
        else cout<<lower_bound(a.begin(),a.end(),p)-a.begin()+1<<"\n";
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