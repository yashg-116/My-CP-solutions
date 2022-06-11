// Dominant Character
#include <bits/stdc++.h>
#define ll long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
using namespace std;
int main(){
    IOS
int t;
cin >> t;
const int N = 1e6 + 5;
 
int n;
string s;
 
while(t--)
	{
		cin >> n >> s;
		int ans = 1e9;
		for(int i = 0; i < n; i++)
		{
			vector<int> f(3, 0);
			f[s[i] - 'a']++;
			for(int j = i + 1; j < min(n, i + 7); j++)
			{
				f[s[j] - 'a']++;
				if(f[0] > f[1] && f[0] > f[2])
					ans = min(ans, j - i + 1);
			}
		}
		if(ans == 1e9)
			ans = -1;
		cout << ans << endl;
	}
}