#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
vector<ll> a;
map<ll,int>m;
void solve(){
    ll n,s=0,cnt=0;
    cin>>n;
    multiset<int>st;
    for(ll i=0;i<n;i++){
        ll x; 
        cin>>x;
        s+=x;
        if(x<0) st.insert(x);
        if(s<0){
            multiset <int> :: iterator i = st.begin();
            while(s<0){
                s-=*i;
                st.erase(i);
                i=st.begin();
                cnt++;
            }
        }  
    }
   cout<<n-cnt<<'\n';
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    solve();
    return 0;
}