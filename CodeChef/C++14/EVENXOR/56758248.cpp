#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int ind=0,v=2;
	int ar[1000];
	while(ind < 1000)
    {
        int p = __builtin_popcount(v) ;

        if(p%2 == 0)
        {
            ar[ind] = v ;
            ind++ ;
        }
        v++ ;
    }

    int t;
    cin>>t;
    while(t--)
    {
        int n ;
        cin >> n ;
        for(int i = 0 ; i < n ; i++)
        {
            cout << ar[i] << ' ';
        }
        cout << '\n' ;
    }
	return 0;
}
