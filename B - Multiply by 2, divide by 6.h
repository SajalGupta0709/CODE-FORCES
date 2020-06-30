#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
	while(t-->0){
	       int n,c=0,f=0;
	       cin>>n;
	       while(n!=1){
	            if(n%3!=0){f=1;break;}
	            if(n%6==0) n/=6;
	            else n*=2;
	            c++;
	       }
	       if(f==1) cout<<"-1\n";
	       else cout<<c<<"\n";
	}
	return 0;
}
