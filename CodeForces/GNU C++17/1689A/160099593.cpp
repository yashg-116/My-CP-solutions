#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
ll pow_(ll x, ll y){
	if (y == 0)return 1;
	ll res = 1;
	while(y){if(y & 1){ res=(res*x); }x=(x*x); y=y/2;}
	return res;
}
void solve(){
    ll n,m,k;
    cin>>n>>m>>k;
    string s1,s2,st="";
    cin>>s1;
    cin>>s2;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    // cout<<s1<<" "<<s2<<endl;
    int i=0,j=0,cnt=0;
    int k1=0,k2=0;
    while(i<n && j<m){
        if((s1[i]<s2[j] && k1<k) || k2>=k){
            st+=s1[i];
            i++;
            k1++;
            k2=0;
        }
        else if((s1[i]>s2[j] && k2<k) || k1>=k){
            st+=s2[j];
            j++;
            k2++;
            k1=0;
        }
        else{
            if(((n-i)<(m-j) && k1<k) || k2>=k){
                st+=s1[i];
                i++;
                k1++;   
                k2=0;
            }
            else{
                st+=s2[j];
                j++;
                k2++;
                k1=0;
            }
        }
    }
    cout<<st<<'\n';
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