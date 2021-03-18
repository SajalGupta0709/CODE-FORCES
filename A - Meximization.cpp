#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
    while(t-->0){
	  int n;
	  cin>>n;
	  int a[n];
	  for(int i=0;i<n;i++)
	    cin>>a[i];
	  sort(a,a+n);
	  std::cout <<a[0] << " ";
	  std::vector<int> x ;
	  for(int i=1;i<n;i++)
	    if(a[i]==a[i-1])
	        x.push_back(a[i]);
	    else cout<<a[i]<<" " ;
	  for(int i:x)
	    cout<<i<<" ";
	  cout<<"\n";  
	}
	return 0;
}
