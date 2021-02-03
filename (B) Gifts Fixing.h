#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>> t;
	while(t-->0){
	       int n;
	       std::cin >> n;
	       int sa,sb,a[n],b[n],da[n],db[n];
           cin>>sa; a[0]=sa;
	       for(int i=1;i<n;i++){
	            cin>>a[i];
	            if(a[i]<sa) sa=a[i];}
	       cin>>sb; b[0]=sb;     
	       for(int i=1;i<n;i++){
	            cin>>b[i];
	            if(b[i]<sb) sb=b[i];}
           for(int i=0;i<n;i++)
                da[i]=a[i]-sa;
	       for(int i=0;i<n;i++)
	            db[i]=b[i]-sb;
	       long long int s=0;
	       for(int i=0;i<n;i++){
	          s+=max(da[i],db[i]);
	       }
	       std::cout << s << std::endl;
	       
	}
	return 0;
}
