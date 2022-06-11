#include <bits/stdc++.h>

using namespace std;
#define ll long long
long long solve(){
        string s1,s2;
        cin>>s1;
        cin>>s2;
    int n1=s1.length();
    int n2=s2.length();
    int aCount=0;
    int cnt=0;
    for(auto i:s1) if(i=='a') aCount++;
    for(auto i:s2) if(i=='a') cnt++;
    if(cnt==n2 and n2==1) return 1;
    if(cnt>=1) return -1;
    return pow(2,aCount);
}
 
int main() {
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
	return 0;
}