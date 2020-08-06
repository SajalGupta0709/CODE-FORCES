#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
	while(t-->0){
	    int n;
	    std::cin >> n;
	    int d=ceil((double)n/4);
	    //cout<<d;
	    for(int i=1;i<=n-d;i++)  
	        cout<<"9";
	    for(int i=0;i<d;i++)     
	        cout<<"8";     
	     cout<<"\n";
	    
	}
	return 0;
}
