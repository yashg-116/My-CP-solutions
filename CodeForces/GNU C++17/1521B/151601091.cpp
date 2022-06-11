// Nastia and a Good Array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>v(n,0);
        int m=1000000005,ind=-1;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(m>v[i])m=v[i],ind=i;
        }
        cout << n - 1 << "\n";
        for (int i = 0; i < n; i++) {
            if (i != ind)
            cout << ind + 1 << ' ' << i + 1 << ' ' << m << ' ' << m + abs(i - ind) << "\n";
        }
    }
}