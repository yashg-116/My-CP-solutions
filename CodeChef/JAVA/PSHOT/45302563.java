/* package codechef; // don't place package name! */

import java.util.Scanner;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc=new Scanner(System.in);
	    int n,n1,a,a1,b,b1,k;
	    String str;
	    n=sc.nextInt();
	    for(int i=0;i<n;i++)
	    {a=0;a1=0;b=0;b1=0;k=0;
	        n1=sc.nextInt();
	        str=sc.next();
	        for(int j=0;j<(2*n1);j++)
	        { 
	            if(j%2==0){
                a1+=1;
                if(str.charAt(j)=='1'){
                    a+=1;
	                }
	            }
        if (j%2!=0){
            b1+=1;
            if(str.charAt(j)=='1'){
                b+=1;
                }
            }
        if((a+(n1-a1))<b){
            System.out.println(j+1);
            k=1;
            break;
        }
        if ((b+(n1-b1))<a){
            System.out.println(j+1);
            k=1;
            break;
	        }
	   }
	   if(k==0){
	       System.out.println(2*n1);
	   }
	    }
	    
	    
		// your code goes here
	}
}
