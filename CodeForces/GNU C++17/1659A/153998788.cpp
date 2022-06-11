#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,r,b;
        cin>>n>>r>>b;
        int num1=int(ceil(r/(float)(b+1)));
        int num2=int(floor(r/(float)(b+1)));
        string s="";
        int p1=0,p2=0,p3=0,cnt=0;
        for(int i=1;i<=b;i++){
            if((r-p1)==(b-p3+1)*num2) cnt=1;
            if(cnt)
            {
                for(int j=1;j<=num2;j++){
                s+="R";
                p2++;
                }
            }
            else{
            for(int j=1;j<=num1;j++){
                s+="R";
                p1++;
                p2++;
                }
            }
            s+="B";
            p3++;
            // cout<<p1<< "   "<<p3<< "  "<<'\n';
        }
        for(int i=1;i<=r-p2;i++){
            s+="R";
        }
        cout<<s<<'\n';
    }

}