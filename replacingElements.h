#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
    while(t-->0){
	  int n,d,f=0;
	  cin>>n>>d;
	  int a[n];
	  int m1,m2;
	  for(int i=0;i<n;i++){
	        cin>>a[i];
	        if(a[i]>d) f=1;
	  }
	  sort(a,a+n);
	  m1=a[0];m2=a[1];
	  //cout<<m1<<" "<<m2;
	  if((m1+m2)<=d||f==0) std::cout << "YES" << std::endl;
	  else cout<<"NO\n";
	}
	return 0;
}
