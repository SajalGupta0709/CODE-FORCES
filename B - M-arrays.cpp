#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
    while(t-->0){
	  int n,m;
	  cin>>n>>m;
	  int a[n], r[m];
	  for(int i=0;i<n;i++)
	    cin>>a[i];
	  for(int i=0;i<m;i++)
	    r[i]=0;
	  for(int i=0;i<n;i++){
	      int x=a[i]%m;
	      r[x]++;
	  }     
	  int s=0;
	  if(r[0]) s++;
	  for(int i=1;i<=m/2;i++){ 
	      if(i==m/2&&m%2==0){
	            if(r[i]!=0)s+=1;
	            continue;}
	      if(r[i]==0){
	        if(r[m-i]!=0)
	            s+=r[m-i];    
	          continue;
	      }
	      int mn=min(r[i],r[m-i]);
	      mn++;
	      if(r[i]>mn) s+=(r[i]-mn+1);
	      else if(r[m-i]>mn) s+=(r[m-i]+1-mn);
	      else s++;
	  }
	  std::cout << s << std::endl;
	}
	return 0;
}
