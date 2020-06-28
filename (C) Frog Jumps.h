#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
	while(t-->0){
	       string s;
	       cin>>s;
	       int r=0;
	       for(int i=0;i<s.length();i++)
	            if(s[i]=='R') r++;
	       if(r==0) {
	           cout<<s.length()+1<<"\n";    continue;
	       }
	        int d[r+1],a[r],c=0;
	        for(int i=0;i<s.length();i++)
	            if(s[i]=='R') a[c++]=i;
	        d[0]=a[0]+1;   d[r]=s.length()-a[r-1];
	        for(int i=1;i<r;i++)
	            d[i]=a[i]-a[i-1];
	        cout<<*max_element(d,d+r+1)<<"\n";
	}
	return 0;
}
