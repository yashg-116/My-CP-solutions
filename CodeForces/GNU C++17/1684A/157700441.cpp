#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    string s;
    cin>>s;
    ll mini1=1000000000,cnt=0,j=0,mini2=1000000000;
    
    for(int i=0;i<s.size();i++){
        ll k=(s[i])-48;
        if(mini1>k){mini1=k;j=i;}
        cnt++;
    }
    for(int i=0;i<s.size();i++){
        if(i!=j)
        {ll k=(s[i])-48;
        mini2=min(k,mini2);}
    }
    if(cnt==1) {cout<<mini1<<'\n';return;}
    if(cnt==2){
        if(s[0]-48==mini1) {cout<<mini2<<'\n';return;}
        else {cout<<mini1<<'\n';return;}
    }
    if(cnt>2){
        cout<<mini1<<endl;
    }
    else{
        cout<<mini2<<endl;
    }
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
    while(t--){
        solve();
    }
    return 0;
}