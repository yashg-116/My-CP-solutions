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
        for(int i=0; i<n;i++){
            cin>>a[i];
        }
        int flag=1,cnt=0,cnt2=0;
        if(n!=1)
       {
           for(int i=0; i<n-1;i++){
                if(a[i+1]-a[i]>3){
                    flag=0; break;
                }
                else if(a[i+1]-a[i]==2)
                    {
                            cnt++; 
                        if(cnt>2 || (cnt>=1 && cnt2>=1)){
                            flag=0; break;
                            }
                    }
                else if(a[i+1]-a[i]==3){
                    cnt2++;
                    if(cnt2>1 || (cnt>=1 && cnt2>=1)){
                            flag=0; break;
                            }
                }
            }
       }
       if(flag==1) cout<<"YES\n";
       else cout<<"NO\n";
    }
}