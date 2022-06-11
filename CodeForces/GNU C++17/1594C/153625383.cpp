#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t,n;
    char c;
    string s;
    cin>>t;
    while(t--){
        cin>>n>>c;
        cin>>s;
        int k=0;
        for(auto i:s){
            if(i!=c){
                k=1;break;
            }
        }
        if(k==0) cout<<0<<'\n';
        else{
            int k2=0;
            for(int i=1;i<=n;i++){
                int k=1;
                for(int j=i;j<=n;j+=i){
                    if(s[j-1]!=c){
                        k=0;break;
                    }
                }
                if(k==1){
                    cout<<1<<'\n'<<i<<'\n';
                    k2=1;break;
                }
            }
            if(k2==0){
                cout<<2<<'\n'<<n-1<<' '<<n<<'\n';
            }
        }
    }
}