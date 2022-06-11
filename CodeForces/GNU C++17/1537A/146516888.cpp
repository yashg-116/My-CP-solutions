#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,sum=0;
    // vector <int> V(50);
    cin>>t;
    while(t--){
        cin>>n;
        sum=0;
        int p;
        for(int i=0;i<n;i++){
            cin>>p;
            sum+=p;
        }
        if(sum<n)
            cout<<1<<"\n";
        else{
            cout<<sum-n<<"\n";
        }
    }
}