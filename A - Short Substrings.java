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
		    String b=sc.next();
		    String a="";
		    a=b.substring(0,1);
		    for(int i=1;i<b.length()-1;i++){
		        a=a+b.substring(i,i+1);
		        i++;
		    }
		    a+=b.substring(b.length()-1);
		
		    System.out.println(a);
		}
	    	
	}
}
