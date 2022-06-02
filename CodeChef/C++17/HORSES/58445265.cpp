#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, j;
    cin >> t;
    while(t--)
    {
        int min_diff=INT_MAX;
        cin >> n;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        sort(a, a + n);
        for (j = 1; j < n; j++)
        {
            int d = a[j] - a[j - 1];
            if (d < min_diff)
            {
                min_diff = d;
            }
        }
        cout << min_diff << endl;
    }
    return 0;
}