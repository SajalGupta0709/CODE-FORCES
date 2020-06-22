import java.util.*;
import java.lang.*;
import java.io.*;
public class Code
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0)
		{
		   int n=sc.nextInt();
		   int k=sc.nextInt();
		   int a[]=new int[n];
		   int b[]=new int[n];
		   for(int i=0;i<n;i++)
		        a[i]=sc.nextInt();
		   for(int i=0;i<n;i++)
		        b[i]=sc.nextInt();     
		   Arrays.sort(a);
		   Arrays.sort(b);
		   int i,te; 
		    for (i = 0; i < n / 2; i++) { 
			    te= b[i]; 
			    b[i] = b[n - i - 1]; 
			    b[n - i - 1] = te; 
	    	}
		   int c=0;
           for(i=0;i<n;i++){if(c==k) break;
                if(a[i]<b[i]){
                    a[i]=b[i];  c++;
                }  
                if(c==k) break;
           }
           int s=0;
           for(i=0;i<n;i++)
                s+=a[i];
		
		    System.out.println(s);
		}
		
	}
}
