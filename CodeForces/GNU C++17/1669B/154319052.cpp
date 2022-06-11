#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, cnt=-1;
        cin>>n;
        int a[200006]={0};
        for(int i=0;i<n;i++){
            int b;
            cin>>b;
            a[b]++;
            if(a[b]>=3) cnt=b;
        }
        cout<<cnt<<'\n';
    }
}