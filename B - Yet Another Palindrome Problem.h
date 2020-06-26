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
	    set <int> s;
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    bool k=false;     
	    s.insert(a[0]);
        s.insert(a[1]);
	    for(int i=2;i<n;i++){
	        if(a[i]==a[i-1]&&a[i]!=a[i-2]) continue;
	        if(s.count(a[i]))  { k=true; break;}
	        s.insert(a[i]);
	    }
	    if(k==true) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
