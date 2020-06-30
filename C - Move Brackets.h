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
	    string s;
	    cin>>s;
	    int b=0,m=0;
	    for(int i=0;i<s.length();i++){
	        if(s[i]=='(') b++;
	        else b--;
	        if(b<m) m=b;
	    }
	    cout<<-m<<"\n";
	}
	return 0;
}
