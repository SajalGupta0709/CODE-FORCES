import java.util.*;
import java.lang.*;
import java.io.*;
public class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0)
		{
		    int c=0,c1=0,n=sc.nextInt();
		    int a[]=new int[n];
		    for(int i=0;i<n;i++)
		     {   a[i]=sc.nextInt();
		         if(a[i]%2!=i%2) {
		             if(a[i]%2==0) c++;
		             else c1++;
		         }
		     }
		     if(c1==c)
		        System.out.println(c);
		    else
		        System.out.println("-1");
		}
	    	
	}
}
