#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,cnt=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i>1){
                if((a[i] % 2) != (a[i-2]%2)) cnt=1;
            }
        }
        if(cnt==1) cout<<"NO\n";
        else cout<<"YES\n";
    }
}
    