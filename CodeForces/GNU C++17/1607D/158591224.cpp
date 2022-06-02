#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    ll n;
    set<int> st;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        st.insert(i+1);
    }
    string s;
    cin>>s;
    int k=1;
    vector<int> v1,v2;
    for(int i=0;i<n;i++){
        if(s[i]=='B')
        {
            v1.push_back(a[i]);
        }
        else v2.push_back(a[i]);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    reverse(v2.begin(),v2.end());
    int cnt=1;
    for(int i=0;i<v1.size();i++){
            if (v1[i] >= i + 1)
                st.erase(i + 1);
    }
    for(int i=0;i<v2.size();i++){
        if (v2[i] <= n-i)
            st.erase(n-i);
    }
    if(st.size()!=0) cout<<"NO\n";
    else cout<<"YES\n";
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