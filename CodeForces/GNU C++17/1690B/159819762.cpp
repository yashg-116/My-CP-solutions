#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
#define vl vector<long long>
ll pow_(ll x, ll y){
	if (y == 0)return 1;
	ll res = 1;
	while(y){if(y & 1){ res=(res*x); }x=(x*x); y=y/2;}
	return res;
}
void solve(){
ll n;
    cin >> n;
    vl v(n), p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    ll x=*max_element(v.begin(),v.end());
    ll y=*max_element(p.begin(),p.end());
    ll r=abs(x-y);
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]-p[i]==r && p[i]>0)
        {
            cnt++;   
        }
        else if(v[i]-p[i]<=r && p[i]==0)
        {
            cnt++;
        }
    }
    if(cnt==n)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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
    while(t--)
        solve();
    return 0;
}