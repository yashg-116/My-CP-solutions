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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int l=0, r=n-1,sl=a[0],rl=a[n-1],f=0, cnt=2, cnt2=0;
        while(l<=r){
            if(sl==rl){
                cnt2=cnt;
                f=1;
                l++;
                r--;
                if(l>=r) break;
                sl+=a[l];
                rl+=a[r];
                cnt+=2;
            }
            else if(sl<rl) {
                
                l++;
                if(l>=r) break;
                sl+=a[l];      
                cnt++;      }
            else{
                r--;
                if(l>=r) break;
                rl+=a[r];
                cnt++;
            }
        }
        if(n==1) cout<<0<<'\n';
        else
        {if(f==1) cout<< cnt2<<'\n';
        else cout<<0<<'\n';}
    }
}