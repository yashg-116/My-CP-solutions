/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int i=0;
		int n=sc.nextInt();
		while(i<n)
		{
		    String s=sc.next();
		    System.out.print(s.replaceAll("party", "pawri"));
		    System.out.println();
		    i++;
		}
		
	}
}
