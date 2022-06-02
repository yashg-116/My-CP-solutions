#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    ll n,k,cnt=0,s1=0;
    cin>>n>>k;
    string s;
    vector<int> v;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1') {
            v.push_back(i);
            cnt++;
            s1+=11;
        }
    }
    if(v.size()==0) {
        cout<<0<<endl;
        return;
    }
    ll a=v[0];
    ll b=v[v.size()-1];
    if(cnt>0 && (n-1-b)<=k){
        s1-=10;
        k-=(n-1-b);
        cnt--;
    }
    if(cnt>0 && a<=k){
        s1-=1;
        k-=a;
    }
    cout<<s1<<'\n';
}

int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}