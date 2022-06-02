#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
int solve(int a, int b, int c, int n, int p, vector<int> &dp)
{
    if (n == 0)
    {
        return p;
    }
    if (n < 0)
    {
        return 0;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    int z = solve(a, b, c, n - a, p + 1, dp);
    int y = solve(a, b, c, n - b, p + 1, dp);
    int x = solve(a, b, c, n - c, p + 1, dp);
    dp[n] = max(max(z, y), x);
    return dp[n];
}

int main()
{
        ios::sync_with_stdio(0);
        cin.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int m1=min(min(a,b),c);
    int m3=max(max(a,b),c);
    int m2=(a+b+c)-m1-m3;
    vector<int> dp(n + 1, -1);
    cout << solve(m1, m2, m3, n, 0, dp) << "\n";
}