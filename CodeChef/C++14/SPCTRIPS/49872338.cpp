#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--)
	{
	    int a,s=0;
	    cin>>a;
	    for(int i=1;i<=a;i++)
	    {
            for(int j=i;j<=a;j+=i)
            {
                if(j%i==0)
                {
                    for(int k=i;k<=a;k+=j)
                    {
                        if(k%j==i)
                            s++;
                    }
                }
            }
	    }
	    cout<<s<<"\n";
	}
	return 0;
}
