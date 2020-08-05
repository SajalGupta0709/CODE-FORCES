#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
	while(t-->0){
	       int n,f=0;
	       std::cin >> n;
	       int a[n];
	       for(int i=0;i<n;i++)
	            cin>>a[i];
	       sort(a,a+n);
	       for(int i=1;i<n;i++){
	           if(a[i]-a[i-1]>1) {f=1;break;}
	       }
	       if(f==0) std::cout << "YES" << std::endl;
	       else cout<<"NO\n";
	}
	return 0;
}
