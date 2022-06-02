#include <bits/stdc++.h>
using namespace std;
#define ll long long 

bool tmp(const pair<ll,ll> &a, const pair<ll,ll> &b)
{
	return a.second < b.second;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,r;
        cin>>n>>r;
        vector<pair<ll, ll>> v;
        ll a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];  
        }
        for(int i=0;i<n;i++){
            cin>>b[i];  
        }
        for(int i=0;i<n;i++){
            v.push_back({a[i]-b[i],a[i]}); 
        }
        sort(v.begin(), v.end());
        // for(int i=0;i<n;i++){
        //     cout<<v[i].first << "  "<< v[i].second;
        //     cout<<'\n';
        // }
        ll s=0;
        for(int i=0; i<n;i++){
            int t;
            if(r>=v[i].second)
            {
                t=(r-v[i].second)/(v[i].first)+1;
                r-=t*(v[i].first);
                s+=t;
            }
        }
        cout<<s<<'\n';
    }
}