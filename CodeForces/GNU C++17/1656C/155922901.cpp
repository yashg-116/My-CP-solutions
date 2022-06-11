#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        int p=0,flag=0;
        for(int i=0;i<n-1;i++){
            if(abs(a[i]-a[i+1])==1) flag=1;
            if(a[i]==1) p=1;
        }
        if(a[n-1]==1) p=1;
        if(p==0) cout<<"YES\n";
        else if(p==1 && flag==1) cout<<"NO\n";
        else cout<<"YES\n";
    }
}