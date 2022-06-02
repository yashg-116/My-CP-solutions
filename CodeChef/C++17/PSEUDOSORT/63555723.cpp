#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, j;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n], a[n], count = 0;
        
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for(i=0;i<n;i++)
        {
            a[i]=arr[i];
        }
        for (i = 0; i < n-1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                break;
            }
        }
        sort(a,a+n);
        for (i = 0; i < n; i++)
        {
            if (a[i] == arr[i])
            {
                count++;
            }
        }
        if (count == n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO"<< endl;
        }
    }
}