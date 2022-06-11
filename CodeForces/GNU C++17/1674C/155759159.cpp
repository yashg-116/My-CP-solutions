#include <bits/stdc++.h>

using namespace std;
#define ll long long
long long solve(){
        string s1,s2;
        cin>>s1;
        cin>>s2;
    int n1=s1.length();
    int n2=s2.length();
    int c1=0,c2=0;
    for(auto i:s1) if(i=='a') c1++;
    for(auto j:s2) if(j=='a') c2++;
    if(c2==n2 and n2==1) return 1;
    if(c2>0) return -1;
    return pow(2,c1);
}
 
int main() {

ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif


    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
	return 0;
}