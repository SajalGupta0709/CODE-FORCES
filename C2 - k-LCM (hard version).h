#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
    while(t-->0){
	  int n,k;
	  cin>>n>>k;
	  for(int i=0;i<k-3;i++)
	    cout<<"1 ";
	    n-=(k-3);
	  if(n%4==0){
	      int n1=n/2;
	      int n2=n1/2;
	      std::cout << n1<<" "<<n2<<" "<<n2 << std::endl;
	  }
	  else if(n%2==0){n-=2;
	      int n1=n/2;
	      std::cout <<"2 "<<n1<<" "<<n1 << std::endl;
	  }
	  else{
	      n--;
	      int n1=n/2;
	      std::cout <<"1 "<<n1<<" "<<n1 << std::endl;
	  }     
	}
	return 0;
}
