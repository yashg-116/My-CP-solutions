#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    int n,m;
    cin>>n>>m;
    int p,k;
    ll m1=0,m2=0;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            m1=0;
            m1+=a[i][j];
            p=i-1;k=j-1;
            while(p>=0 && k>=0){
                m1+=a[p][k];
                p--;k--;
            }
            p=i-1;k=j+1;
            while(p>=0 && k<m){
                m1+=a[p][k];
                p--;k++;
            }
            p=i+1;k=j+1;
            while(p<n && k<m){
                m1+=a[p][k];
                p++;k++;
            }
            p=i+1;k=j-1;
            while(p<n && k>=0){
                m1+=a[p][k];
                p++;k--;
            }
            m2=max(m2,m1);
            // cout<<m2<<'\n';
        }
    }
    cout<<m2<<'\n';
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