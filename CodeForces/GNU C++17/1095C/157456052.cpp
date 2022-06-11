#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    ll n,k;
    cin>>n>>k;
    if(k>n) {cout<<"NO\n"; return;}
    if( __builtin_popcount(n)>k) {cout<<"NO\n"; return;}
    string s="";
    queue<int> q;
    map<int,int> m;int cnt=0;
    while(n>0){
        int x=n%2;
        if(x==1){
            if(cnt!=0) q.push(1<<cnt);
            m[1<<cnt]++;
        }
        n>>=1;
        cnt++;
    }
    cnt=m.size();
    while(cnt<k){
        int z = q.front();
		q.pop();
        m[z]--;
        m[z / 2] += 2;
		if(z / 2 > 1)
		{
            
			q.push(z / 2);
			q.push(z / 2);
		}
		cnt++;
    }
    printf("YES\n");
    for(auto x : m)
		for(int i = 0; i < x.second; i++)
			printf("%d ", x.first);
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

        solve();
    return 0;
}