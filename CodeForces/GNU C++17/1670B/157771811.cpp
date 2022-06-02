#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ull unsigned long long
void solve()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        n = s.size();
        map<char, int> m;
        int k;
        cin >> k;
        for (int i = 0; i < k; i++)
        {
            char c;
            cin >> c;
            m[c] = 1;
        }
        int ind = -1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (m[s[i]] == 1)
            {
                ind = i;
                break;
            }
        }
        vector<int> v(n);
        int temp = 0, res = 0;
        for (int i = ind - 1; i >= 0; i--)
        {
            temp++;
            res = max(res, temp);
            if (m[s[i]])
                temp = 0;
        }
        cout << res << endl;
    }
}
int main()
{
                   
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