#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int f=0;
        for(int i=0;i<n;i++)
        {cin>>a[i];
        if(a[i]<0) f++;
        }
        int f2=f;
        int flag=0;
        int i;
        for(i=0;i<n;i++){
            if(f==0) break;
            if(a[i]>0){
                a[i]=-a[i];
            }
            f--;
        }
        for(int j=i;j<n;j++){
            if(a[j]<0) {a[j]=-a[j];}
        }
        // for(int j=0;j<n;j++){
        //     cout<<a[j]<<"   ";
        // }
        for(i=1;i<n;i++){
            if(a[i]<a[i-1]){
                flag=1;break;
            }
        }
        if(flag==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
}