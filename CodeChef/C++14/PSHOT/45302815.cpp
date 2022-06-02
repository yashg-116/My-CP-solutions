#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int n,n1,a,a1,b,b1,k;
	string s;
	cin>>n;
	for(int i=0;i<n;++i)
	{ a=0;b=0;a1=0;b1=0;k=0;
	    cin>>n1;
	    cin>>s;
	    for(int j=0;j<2*n1;++j)
	    {
	        if(j%2==0)
	        {
	            a1++;
	            if(s[j]=='1')
	            {
	                a++;
	            }
	        }
	        if(j%2!=0)
	        {
	            b1++;
	            if(s[j]=='1')
	            {
	                b++;
	            }
	        }
	        if((a+(n1-a1))<b)
	        {
	            cout<<(j+1)<<endl;
	            k=1;
	            break;
	        }
	        if((b+(n1-b1))<a)
	        {
	            cout<<(j+1)<<endl;
	            k=1;
	            break;
	        }
	        
	    }
	    if(k==0)
	    {
	        cout<<(2*n1)<<endl;
	    }
	}
	return 0;
}
