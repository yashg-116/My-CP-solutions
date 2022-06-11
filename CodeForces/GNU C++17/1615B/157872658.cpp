#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
vector<vector<int>> v(32, vector<int>(200001, 0));
void solve()
{
    int l, r;
    cin >> l >> r;
    int maxi = -1;
    for (int i = 0; i < 32; i++)
    {
        int y = v[i][r] - v[i][l - 1];
        maxi = max(maxi, y);
    }
    cout << r - l + 1 - maxi << "\n";
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
    v[0][0] = 0;
    for (int i = 1; i < 200001; i++)
    {
        int j = 0, s = 0;
        int k = i;
        while (k > 0)
        {
            if (k % 2)
            {
                v[j][i] = 1 + v[j][i - 1];
            }
            else
            {
                v[j][i] = v[j][i - 1];
            }
            k >>= 1;
            j++;
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}