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
    int cnt=0;
    for(int i=0;i<n-1;i++){
        while(a[i]<=a[i+1] && i<n-1){
            i++;
        }
        if(i==n-1) break;
        else{
            cnt++;
            i++;
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