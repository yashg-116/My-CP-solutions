#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    int k,n;
    string s;
    cin>>n>>k;
    cin>>s;
    int v[26]={0};
    for(int i=0;i<n;i++){
        v[s[i]-'a']++;
    }
    int p=0,o=0,ans=0;
    for(auto i:v){
        p+=i/2;
        o+=i%2;
    }
    ans+=2*(p/k);
    o+=2*(p%k);
    if(o>=k) ans++;
    cout<<ans<<"\n";
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