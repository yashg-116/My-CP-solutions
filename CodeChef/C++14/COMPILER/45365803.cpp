#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	long long int n;string s;
	long long c=0,k=0,maxx=0;
	cin>>n;
	while (n--)
	{
	    cin>>s;
	    c=0;k=0;maxx=0;
	    for(long long int i=0;i<s.size();++i)
	    {
	        if(s[i]=='<')
	        {
	            c++;k++;
	        }
	        if(s[i]=='>')
	        {
	            c--;k++;
	        }
	        if(c<0)
	        {
	            break;
	        }
	        if (c==0)
	        {
	            maxx=std::max(k,maxx);
	        }
	    }
	   cout<<maxx<<endl;
	}
	return 0;
}
