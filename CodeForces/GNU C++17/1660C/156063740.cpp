#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a[26]={0}, cnt=0;
        for(int i=0;i<s.size();i++){
            if(a[s[i]-97]==1){
                cnt+=2;
                memset(a,0,sizeof(a));
            }
            else a[s[i]-97]=1;
        }
        cout<<s.size()-cnt<<'\n';
    }
}