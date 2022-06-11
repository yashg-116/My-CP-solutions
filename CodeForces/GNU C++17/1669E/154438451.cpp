#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a[n];
        map<string, long long> m;
        string s;
        for(int i=0;i<n;i++){
            cin>>s;
            a[i]=s;
            m[s]++;
        }
        
        long long int p=0,k;
        for(auto &it:m){
            for(auto &it2:m){
                int k= (it.first[0]!= it2.first[0])+(it.first[1]!= it2.first[1]);
                if(k==1) p+=it.second*it2.second;

            }
        }
        cout<<p/2<<'\n';
    }
}