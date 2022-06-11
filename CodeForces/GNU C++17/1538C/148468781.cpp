#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t,n,l,r;
    cin>>t;
    while(t--){
        cin>>n>>l>>r;
        vector<int>v(n,0);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }  
        sort(v.begin(),v.end());
        ll i=0,j=n-1,cnt=0;
        for(int i=0;i<n;i++){
            cnt-=(lower_bound(v.begin(),v.end(),l-v[i])-v.begin());
            cnt+=(upper_bound(v.begin(),v.end(),r-v[i])-v.begin());
            if (l <= 2 * v[i] && 2 * v[i] <= r) {
            cnt--;
        }
        }
        cout<<cnt/2<<"\n";
    }
}