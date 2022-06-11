#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int s=0;
        for(int i=0;i<n;i++){
            int b;
            cin>>b;
            s+=b-1;
        }
        if(s&1) cout<< "errorgorn\n";
        else cout<<"maomao90\n";
    }
}