#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) 
{ 
    if (a == 0)
        return b; 
    return gcd(b % a, a); 
} 
 
// Function to return LCM of two numbers 
int lcm(int a, int b) 
{ 
    return (a / gcd(a, b)) * b;
}
int main() {
	// your code goes here
	int t;
	cin>> t;
    while(t-->0){
	  string s1,s2;
	  cin>>s1>>s2;
	  if(s1.length()<s2.length())
	        swap(s1,s2);
	  int n=s1.length(),m=s2.length(),f=0;
      int l=lcm(n,m);
      n=l/n;m=l/m;
      string r1=s1,r2=s2;
	  for(int i=1;i<n;i++) r1+=s1;
	  for(int i=1;i<m;i++) r2+=s2;
	  if(r1==r2)
	  cout<<r2<<"\n";
	  else std::cout << "-1" << std::endl;
        
    }
	return 0;
}
