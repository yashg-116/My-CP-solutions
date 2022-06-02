#include <iostream>
using namespace std;
void start()
{
    long long n,m,k1;
    cin>>n>>m>>k1;
    double ar[n+1][m+1];
    for(long long i=0;i<=n;i++){
        for(long long j=0;j<=m;j++){
            if(i==0||j==0){
                ar[i][j]=0;}
            else
            {cin>>ar[i][j];}
        }
    }
    for(long long i=0;i<=n;i++){
        double temp=0;
        for(long long j=0;j<=m;j++){
            ar[i][j]+=temp;
            temp=ar[i][j];
        }
    }
    for(long long i=0;i<=m;i++){
        double temp=0;
        for(long long j=0;j<=n;j++){
            ar[j][i]+=temp;
            temp=ar[j][i];
        }
    }
    long long minn= min(m,n);
    long long p=0;
    for(long long k=1;k<=minn;k++)
    {
        for(long long l=k;l<=n;l++)
        {
            for(long long l2=k;l2<=m;l2++)
            {
                if((ar[l][l2]+ar[l-k][l2-k]-ar[l][l2-k]-ar[l-k][l2])/(k*k)>=k1)
                { p++;}
            }
        }
    }
    cout<<p<<endl;
}


int main() {
	// your code goes here
	long long n2;
	cin>>n2;
	while(n2--)
	{
	    start();
	}
	return 0;
}
