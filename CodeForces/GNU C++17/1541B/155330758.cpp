#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr); cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n+1];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        ll cnt=0;
        for(int i=1;i<=n;i++){
            ll m=a[i];
            ll k=a[i]-i;
            for(k;k<=n;k+=m){
                if(k>0 && i<k)
                    if(m*a[k]==(i+k)) cnt++;
            }
        }
        cout<<cnt<<'\n';
    }
}